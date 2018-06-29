/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:44:31 by gelambin          #+#    #+#             */
/*   Updated: 2018/06/29 19:15:09 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <specifiers.h>

int		precision(char *str, t_ctx *ctx, t_flag *flags)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (*str == '*')
	{
		nb = va_arg(ctx->current_args, int);
		if (nb >= 0)
			flags->precision = nb;
		return (1);
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + str[i++] - '0';
	flags->precision = nb;
	return (i);
}

int		argument_access(char *str, t_ctx *ctx, t_flag *flags)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + str[i++] - '0';

	if (str[i] == '*')
	{
		nb = va_arg(ctx->current_args, int);
		if (nb < 0)
		{
			flags->left_align = 1;
			nb = -nb;
		}
		i++;
		flags->width = nb;
		return (i - 1);
	}
	flags->width = nb;

	if (str[i] == '$' && nb > 0)
	{
//		va_end(ctx->current_args);
		va_copy(ctx->current_args, ctx->args);
		while (nb-- > 1)
			va_arg(ctx->current_args, void*);
		return (i - 1);
	}

	return (i -1);
}

int		length(char *str, t_flag *flags)
{
	if (str[0] == 'h' && str[1] == 'h' && flags->length < 1)
	{
		flags->length = e_length_hh;
		return (1);
	}
	else if (str[0] == 'l' && str[1] == 'l' && flags->length < 8)
	{
		flags->length = e_length_ll;
		return (1);
	}

	if (str[0] == 'h' && flags->length < 2)
		flags->length = e_length_h;
	else if (str[0] == 'l' && flags->length < 8)
		flags->length = e_length_l;
	else if (str[0] == 'j' && flags->length < 8)
		flags->length = e_length_j;
	else if (str[0] == 'z' && flags->length < 8)
		flags->length = e_length_z;
	return (0);
}

int		flag(char *str, t_ctx *ctx, t_flag *flags)
{
	int	i;

	i = 0;
	while (str[i++])
		if (str[i] == '#')
			flags->alternate = 1;
		else if (str[i] == '0')
			flags->pad = 1;
		else if (str[i] == '.')
			i += precision(str + i + 1, ctx, flags);
		else if ((str[i] >= '1' && str[i] <= '9')  || str[i] == '$'|| str[i] == '*')
			i += argument_access(str + i, ctx, flags);
		else if (str[i] == '-')
			flags->left_align = 1;
		else if (str[i] == '+')
			flags->explicite_sign = 1;
		else if (str[i] == ' ')
			flags->space_for_sign = 1;
		else if (str[i] == 'h' || str[i] == 'l'
			|| str[i] == 'j' || str[i] == 'z' )
			i += length(str + i, flags);
		else
			return (i);
	return (i);
}

/*
 static const t_conv g_conv[] = {
     { "bdiouxX", int_arg },
     { "DOU", dou_arg },
     { "Cc", c_arg },
     { "s", s_arg },
     { "S", ws_arg },
     { "p", p_arg },
     { "%", pct_arg }
 };
 */

 //		dDioOuU
 //		xX
 //		p
 //		cC
 //		sS

int		specifier(char specifier, t_flag *flags)
{
	if (specifier == 'd' || specifier == 'D' || specifier == 'i')
		flags->procedure = &spec_d;
	else if (specifier == 'u' || specifier == 'U')
		flags->procedure = &spec_u;
	else if (specifier == 'x' || specifier == 'X')
		flags->procedure = &spec_x;
	else if (specifier == 'p')
		flags->procedure = &spec_p;
	else if (specifier == 'o' || specifier == 'O')
		flags->procedure = &spec_o;
	else if (specifier == 'b')
		flags->procedure = &spec_b;

	if (flags->procedure != &spec_c)
	{
		if (flags->precision != -1)
			flags->pad = 0;
		else
			flags->precision = 1;
		return (1);
	}

/*	else if (specifier == 'e')
		flags->procedure = &spec_e;
	else if (specifier == 'E')
		flags->procedure = &spec_E;
	else if (specifier == 'f')
		flags->procedure = &spec_f;
	else if (specifier == 'g')
		flags->procedure = &spec_g;
	else if (specifier == 'G')
		flags->procedure = &spec_G;
*/

	if (specifier == 'c' || specifier == 'C')
		flags->procedure = &spec_c;
	else if (specifier == 's')
		flags->procedure = &spec_s;
	else if (specifier == 'S')
		flags->procedure = &spec_S;
	else if (specifier == '%')
		flags->procedure = &spec_percent;
	else
		return (0); // UNKNOW SPECIFIER
	return (1);
}

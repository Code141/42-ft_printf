/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:44:31 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/20 15:44:41 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <specifiers.h>

extern t_ctx *g_ctx;

int		precision(char *str, t_flag *flags)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (*str == '*')
	{
		nb = va_arg(g_ctx->current_args, int);
		if (nb >= 0)
			flags->precision = nb;
		return (1);
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + str[i++] - '0';
	flags->precision = nb;
	return (i);
}

int		argument_access(char *str, t_flag *flags)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + str[i++] - '0';

	if (str[i] == '*')
	{
		nb = va_arg(g_ctx->current_args, int);
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
		va_end(g_ctx->current_args);
		va_copy(g_ctx->current_args, g_ctx->args);
		while (nb-- > 1)
			va_arg(g_ctx->current_args, void*);
		return (i - 1);
	}

	return (i - 1);
}

int		length(char *str, t_flag *flags)
{
	if (str[0] == 'h')
	{
		if (str[1] == 'h' && flags->length < 1)
		{
			flags->length = e_length_hh;
			return (1);
		}
		if (flags->length < 2)
			flags->length = e_length_h;
	}
	else if (str[0] == 'l')
	{
		if (str[1] == 'l')
		{
			flags->length = e_length_ll;
			return (1);
		}
		flags->length = e_length_l;
	}
	else if (str[0] == 'j')
		flags->length = e_length_j;
	else if (str[0] == 'z')
		flags->length = e_length_z;
	return (0);
}

int		flag(char *str, t_flag *flags)
{
	int	i;

	i = 0;
	while (str[i++])
		if (str[i] == '#')
			flags->alternate = 1;
		else if (str[i] == '0')
			flags->pad = 1;
		else if (str[i] == '.')
			i += precision(str + i + 1, flags);
		else if ((str[i] >= '1' && str[i] <= '9')
				|| str[i] == '$'|| str[i] == '*')
			i += argument_access(str + i, flags);
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

	if (signed_integer(specifier, flags) || unsigned_integer(specifier, flags))
	{
		if (flags->precision != -1)
			flags->pad = 0;
		else
			flags->precision = 1;

		if (flags->data.uint64 < 0x100)
			flags->length = 1;
		else if (flags->data.uint64 < 0x10000 && flags->length > 2)
			flags->length = 2;
		else if (flags->data.uint64 < 0x100000000 && flags->length > 4)
			flags->length = 4;
		return (1);
	}

/*
	else if (specifier == 'e')
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

	if (character(specifier, flags))
		return (1);


	if (specifier == '%')
	{
		flags->procedure = &spec_percent;
		return (1);
	}
	return (0);
}

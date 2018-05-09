/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:44:31 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/09 21:54:28 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <va_args.h>
#include <specifiers.h>

int		argument_access(char *str, t_ctx *ctx, t_flag *flags)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (str[i] == '0')
		flags->pad = 1;
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + str[i++] - '0';
	//IF NB && $
//	if (str[-1] == '.')
//		flags->precision = nb;
	if (str[i] == '$' && nb)
	{
		pos_arg(ctx, nb);
		i++;
	}
	else
		flags->width = nb;
	return (i);
}

int		flag(char *str, t_ctx *ctx, t_flag *flags)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
			flags->alternate = 1;
		else if (str[i] == '0')
			flags->pad = 1;
		else if (str[i] == '-')
			flags->left_align = 1;
		else if (str[i] == '+')
			flags->explicite_sign = 1;
		else if (str[i] == ' ')
			flags->space_for_sign = 1;
		else
			return (i);
		i++;
	}
	return (i);
}

int		width_precision(char *str, t_ctx *ctx, t_flag *flags)
{
	int	i;

	i = 0;
	if (str[i] == '*')
	{
		flags->width = va_arg(ctx->current_args, int);
		i++;
	}
	else
		while (str[i] >= '0' && str[i] <= '9')
			flags->width = (flags->width * 10) + str[i++] - '0';

	if (str[i] == '.')
	{
		i++;
		if (str[i] == '*')
		{
			flags->precision = va_arg(ctx->current_args, int);
			i++;
		}
		else
		{
			flags->precision = 0;
			while (str[i] >= '0' && str[i] <= '9')
				flags->precision = (flags->precision * 10) + str[i++] - '0';
		}
	}
	return (i);
}

//---------

int		length(char *str, t_flag *flags)
{
	flags->length = 0;

	if (str[0] == 'h' && str[1] == 'h')
		flags->length = e_length_hh;
	else if (str[0] == 'l' && str[1] == 'l')
		flags->length = e_length_ll;

	if (flags->length)
		return (2);

	if (str[0] == 'h')
		flags->length = e_length_h;
	else if (str[0] == 'l')
		flags->length = e_length_l;
	else if (str[0] == 'j')
		flags->length = e_length_j;
	else if (str[0] == 'z')
		flags->length = e_length_z;

	if (flags->length)
		return (1);

	return (0);
}

int		specifier(char *str, t_flag *flags)
{
	if (*str == 'c')
		flags->specifier = &spec_c;
	else if (*str == 'd')
		flags->specifier = &spec_d;
/*	else if (*str == 'u')
		flags->specifier = &spec_u;
	else if (*str == 'x')
		flags->specifier = &spec_x;
	else if (*str == 'X')
		flags->specifier = &spec_X;
	else if (*str == 'e')
		flags->specifier = &spec_e;
	else if (*str == 'E')
		flags->specifier = &spec_E;
	else if (*str == 'f')
		flags->specifier = &spec_f;
	else if (*str == 'g')
		flags->specifier = &spec_g;
	else if (*str == 'G')
		flags->specifier = &spec_G;
*/	else if (*str == 's')
		flags->specifier = &spec_s;
/*	else if (*str == 'p')
		flags->specifier = &spec_p;
*/	else if (*str == '%')
		flags->specifier = &spec_percent;
	else
		return (0); // UNKNOW SPECIFIER
	return (1);
}

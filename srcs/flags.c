/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:44:31 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/03 20:49:15 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <specifiers/spec_s.h>

void	argument_access(const char *str, int *pos, t_flag *flags)
{
	int	nb;
	int	i;

	i = *pos;
	nb = 0;
	if (str[i] == '0')
		flags->pad = 1;
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + str[i++] - '0';
	if (str[i] == '$')
	{
		flags->parameter = nb;
		i++;
	}
	else
		flags->width = nb;
	*pos = i;
}

int	flag(const char *str, int *pos, t_flag *flags)
{
	int	i;

	i = *pos;
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
			flags->space_for_signe = 1;
		else if (str[i] == '\'')
			flags->grouping_thousands = 1;
		else
			return (1);
		i++;
		(*pos)++;
	}
	return (0);
}

int		width_precision(const char *str, t_flag *flags)
{
	int	i;

	flags->precision = 1; // DEFAULT BEHAVIOR
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		flags->width = (flags->width * 10) + str[i++] - '0';

	if (str[i] == '.')
		i++;

	// * for next argument

	while (str[i] >= '0' && str[i] <= '9')
		flags->precision = (flags->precision * 10) + str[i++] - '0';
	return (1);
}

//---------

int		length(const char *str, t_flag *flags)
{
	if (*str == 'h' && *(str + 1) == 'h')
		flags->length = e_length_hh;
	else if (*str == 'l' && *(str + 1) == 'l')
		flags->length = e_length_ll;
	if (flags->length)
		return (2);
	if (*str == 'h')
		flags->length = e_length_h;
	else if (*str == 'l')
		flags->length = e_length_l;
	else if (*str == 'j')
		flags->length = e_length_j;
	else if (*str == 'z')
		flags->length = e_length_z;
	if (flags->length)
		return (1);
	return (0);
}

int		specifier(const char *str, t_flag *flags)
{
	if (*str == 'c')
		flags->specifier = &spec_c;
/*	else if (*str == 'd')
		flags->specifier = &spec_d;
	else if (*str == 'u')
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
	else if (*str == '%')
		flags->specifier = &spec_percent;
*/	else
		return (-1); // UNKNOW SPECIFIER
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:44:31 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/12 19:36:07 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_printf_flags.h>

int	flag(const char *str, int *pos, t_printf_flags *flags)
{
	int	i;

	i = *pos;
	while (str[i])
	{
		if (str[i] == '#')
			flags->alternate = 1;
		else if (str[i] == '0')
			while (str[i] >= '0' && str[i] <= '9')
				flags->pad = (flags->pad * 10) + str[i++] - '0';
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

// Think to the possibility to read next arg for get an int precision
// * for next argument
// *3$ for 3em argument

void	width_precision(const char *str, int *pos, t_printf_flags *flags)
{
	int	i;

	i = *pos;
	if (str[i] != 0)
		while (str[i] >= '0' && str[i] <= '9')
			flags->width = (flags->width * 10) + str[i++] - '0';

	flags->precision = 1; // DEFAULT BEHAVIOR
	if (str[i] == '.')
		while (str[i] >= '0' && str[i] <= '9')
			flags->precision = (flags->precision * 10) + str[i++] - '0';

	(*pos) += i;
}

//---------

int	length(const char *str, t_printf_flags *flags)
{
/*	if (*str == 'h' && str[i + 1] == 'h')
		flags->length = e_length_hh;
	if (*str == 'l' && str[i + 1] == 'l')
		flags->length = e_length_ll;
	if (flags->length)
		return (2);
	if (*str == 'h')
		flags->length = e_length_h;
	if (*str == 'l')
		flags->length = e_length_l;
	if (*str == 'j')
		flags->length = e_length_j;
	if (*str == 'z')
		flags->length = e_length_z;
	if (flags->length)
		return (1);
*/	return (0);
}

int	specifier(const char *str, t_printf_flags *flags)
{
/*	if (*str == 'c')
		flags->length = e_length_c;
	else if (*str == 'd')
		flags->length = e_length_d;
	else if (*str == 'u')
		flags->length = e_length_u;
	else if (*str == 'x')
		flags->length = e_length_x;
	else if (*str == 'X')
		flags->length = e_length_X;
	else if (*str == 'e')
		flags->length = e_length_e;
	else if (*str == 'E')
		flags->length = e_length_E;
	else if (*str == 'f')
		flags->length = e_length_f;
	else if (*str == 'g')
		flags->length = e_length_g;
	else if (*str == 'G')
		flags->length = e_length_G;
	else if (*str == 's')
		flags->length = e_length_s;
	else if (*str == 'p')
		flags->length = e_length_p;
	else if (*str == '%')
		flags->length = e_length_percent;
	else
		return (-1); // UNKNOW SPECIFIER
*/	return (1);
}

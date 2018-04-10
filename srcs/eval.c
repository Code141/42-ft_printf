/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/10 21:53:03 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

void	flags(const char *format, int *i, int size, va_list *args)
{
	while (format[*i])
	{
/*
		if (format[*i] == '#')
		else if (format[*i] == '0')	// [0-9] check for big pad numbers
		else if (format[*i] == '-')
		else if (format[*i] == '+')
		else if (format[*i] == ' ')
		else if (format[*i] == '\'')
		else if (format[*i] == 'I')
		else
*/
		(*i)++;
	}
}

int		get_buff_size(const char *format, va_list *args)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			flags(format, &i, &size, args);
			width(format, &i, &size, args);
			precision(format, &i, &size, args);
			length(format, &i, &size, args);
			specifier(format, &i, &size, args);
		}
		else
		{
			i++;
			size++;
		}
	}
	return (size);
}

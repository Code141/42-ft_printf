/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:41:06 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/10 20:10:42 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>	// argss
#include <stdlib.h>	// Malloc
#include <unistd.h>	// Write

#include <stdio.h>	// Printf

#include <eval.h>

int	copy_format(const char *format, va_list args, char *buff)
{
	int i;

	i = 0;
	while (format[i])
	{
		*buff = format[i];
		buff++;
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		size;
	char	*buff;

	va_start(args, format);
		size = get_buff_size(format, &args);
	va_end(args);

	if (size < 0)
		return (-1);
	buff = (char*)malloc((sizeof(*buff) * size) + 1);
	if (!buff)
		return (-1);
	copy_format(format, args, buff);
	write(1, buff, size);
	return (size);
}
/*
void foo(char *fmt, ...)
{
	va_list ap;
	int		d;
	char	c;
	char	*s;

	aa_start(ap, fmt);

	while (*fmt)
		switch(*fmt++) {
			case 's':                       // string
				s = va_args(ap, char *);
				printf("string %s\n", s);
				break;
			case 'd':                       // int
				d = va_args(ap, int);
				printf("int %d\n", d);
				break;
			case 'c':                       // char
				// Note: char is promoted to int.
				c = va_args(ap, int);
				printf("char %c\n", c);
				break;
		}
	va_end(ap);
}
*/

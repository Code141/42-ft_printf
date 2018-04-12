/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:41:06 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/11 17:41:37 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>	// argss
#include <stdlib.h>	// Malloc
#include <unistd.h>	// Write

#include <stdio.h>	// Printf

#include <eval.h>

int	copy_text(const char *text, va_list args, char *buff)
{
	int i;

	i = 0;
	while (text[i])
	{
		*buff = text[i];
		buff++;
		i++;
	}
	return (0);
}

int	ft_printf(const char *text, ...)
{
	va_list	va_args;
	int		size;
	char	*buff;

	va_start(va_args, text);
		size = get_buff_size(text, &va_args);
	va_end(va_args);

	if (size < 0)
		return (-1);
	buff = (char*)malloc((sizeof(*buff) * size) + 1);
	if (!buff)
		return (-1);
//	copy_text(text, args, buff);
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

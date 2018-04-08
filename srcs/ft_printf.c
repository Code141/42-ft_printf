/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:41:06 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/05 14:16:19 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>	// Args
#include <stdlib.h>	// Malloc
#include <unistd.h>	// Write

#include <stdio.h>	// Printf

#include <eval.h>

int	copy_eval(const char *eval, va_list arg, char *buff)
{
	int i;

	i = 0;
	while (eval[i])
	{
		*buff = eval[i];
		buff++;
		i++;
	}
	return (0);
}

int	ft_printf(const char *eval, ...)
{
	va_list	arg;
	int		size;
	char	*buff;

	va_start(arg, eval);

	size = get_buff_size(eval, &arg);
	va_end(arg);

	if (size < 0)
		return (-1);
	buff = (char*)malloc((sizeof(*buff) * size) + 1);
	if (!buff)
		return (-1);
	copy_eval(eval, arg, buff);
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
				s = va_arg(ap, char *);
				printf("string %s\n", s);
				break;
			case 'd':                       // int
				d = va_arg(ap, int);
				printf("int %d\n", d);
				break;
			case 'c':                       // char
				// Note: char is promoted to int.
				c = va_arg(ap, int);
				printf("char %c\n", c);
				break;
		}
	va_end(ap);
}
*/

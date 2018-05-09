/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:41:06 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/09 21:21:54 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

#include <interceptor.h>
#include <s_ctx.h>
#include <ft_printf.h>

static t_ctx	*init(const char *format)
{
	t_ctx	*ctx;
	int		i;
	int		nb_arg;

	i = 0;
	nb_arg = 0;
	while (format[i])
	{
		if (format[i] == '%')
			nb_arg++;
		i++;
		if (format[i] == '%')
			i++;
	}
	ctx = (t_ctx*)malloc(sizeof(t_ctx) + sizeof(t_flag) * nb_arg);
	if (!ctx)
		exit (0);
	ctx->format = (char*)format;
	return (ctx);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	t_ctx	*ctx;
	int		ret;

	if (format == NULL)
		return (0);

	ctx = init(format);
	va_start(ctx->args, format);
	va_copy(ctx->current_args, ctx->args);

	interceptor(ctx);

//	calculator(ctx);
		// mallocator
//	rewritor(ctx);

	va_end(args);

/*
	write(1, buff, size);
*/

	ret = ctx->buff_size;
//	free(ctx);
	return (ret);
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

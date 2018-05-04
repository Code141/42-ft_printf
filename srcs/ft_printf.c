/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:41:06 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/04 19:41:50 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

#include <interceptor.h>
#include <s_ctx.h>
#include <ft_printf.h>

static t_ctx	*init(const char *text, va_list *args)
{
	t_ctx	*ctx;
	int		i;
	int		nb_arg;

	i = 0;
	nb_arg = 0;
	while (text[i])
	{
		if (text[i] == '%')
			nb_arg++;
		i++;
		if (text[i] == '%')
			i++;
	}
	ctx = (t_ctx*)malloc(sizeof(t_ctx) + sizeof(t_flag) * nb_arg);
	if (!ctx)
		exit (0);
	ctx->text = (char*)text;
	ctx->args = args;
	return (ctx);
}

int	ft_printf(const char *text, ...)
{
	va_list	args;
	t_ctx	*ctx;
	int		ret;

	va_start(args, text);
	ctx = init(text, &args);

	interceptor(ctx);

//	calculator(ctx);
		// mallocator
//	rewritor(ctx);

	va_end(args);

/*
	write(1, buff, size);
*/

	ret = ctx->buff_size;
	free(ctx);
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

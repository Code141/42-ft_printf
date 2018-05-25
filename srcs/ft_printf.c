/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:41:06 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/25 18:14:42 by gelambin         ###   ########.fr       */
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
	va_end(ctx->current_args);
	va_end(ctx->args);
	ret = ctx->buff_size;
//	free(ctx);
	return (ret);
}

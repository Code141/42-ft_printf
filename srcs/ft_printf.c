/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:41:06 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/11 13:26:11 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

#include <interceptor.h>
#include <s_ctx.h>
#include <ft_printf.h>

t_ctx			*g_ctx;

static t_ctx	*init(const char *format)
{
	t_ctx	*ctx;
	int		i;
	int		nb_arg;

	i = 0;
	nb_arg = 0;
	while (format[i])
		if (format[i++] == '%')
			nb_arg++;
	g_ctx = (t_ctx*)malloc(sizeof(t_ctx) + (sizeof(t_flag) * nb_arg));
	if (!g_ctx)
		exit (0);
	g_ctx->buff_pos = 0;
	g_ctx->buff_size = 0;
	return (ctx);
}

// CHECK STATICS FUNCTIONS

int	ft_printf(const char *format, ...)
{
	int		ret;

	if (format == NULL)
		return (0);

	init(format);
	va_start(g_ctx->args, format);
	va_copy(g_ctx->current_args, g_ctx->args);

	interceptor(format);

	write(1, g_ctx->buffer, g_ctx->buff_size);
	ret = g_ctx->buff_size;

	va_end(g_ctx->current_args);
	va_end(g_ctx->args);
	free(g_ctx);

	return (ret);
}

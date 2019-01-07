/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:41:06 by gelambin          #+#    #+#             */
/*   Updated: 2019/01/07 18:26:37 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

#include <interceptor.h>
#include <s_ctx.h>
#include <ft_printf.h>

t_ctx			g_ctx;

int	ft_printf(const char *format, ...)
{

	if (!format)
		return (0);
	g_ctx.buff_pos = 0;
	g_ctx.buff_size = 0;

	va_start(g_ctx.args, format);
	va_copy(g_ctx.current_args, g_ctx.args);

	interceptor(format);
	write(1, g_ctx.buffer, g_ctx.buff_pos);

	va_end(g_ctx.current_args);
	va_end(g_ctx.args);
	return (g_ctx.buff_size);
}

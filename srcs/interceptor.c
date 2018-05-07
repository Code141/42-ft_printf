/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interceptor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/07 19:47:16 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <s_ctx.h>
#include <flags.h>
#include <va_args.h>

//==77134==WARNING: unexpected format specifier in printf interceptor: %-01+

#include <unistd.h>

void	error(const char *arg, int pos)
{
	write (1, "WARNING: unexpected format specifier in ft_printf interceptor: "
			, 63);
	write (1, arg, pos);
	write (1, "\n", 1);
}

int		new_arg(char *arg, t_ctx *ctx, int current_arg)
{
	int		pos;
	t_flag	*flags;

	// BZERO FLAG
	flags = ctx->flags + current_arg;
	flags->width = 0;
	pos = 1;
	if (arg[pos] >= '0' && arg[pos] <= '9')
		pos += argument_access(arg + pos, ctx, flags);
	if (!flags->width)
		pos += flag(arg + pos, flags);
	pos += width_precision(arg + pos, ctx, flags);
	pos += length(arg + pos, flags);
	if (!specifier(arg + pos++, flags))
		error(arg, pos);
	flags->jump = pos;
	get_arg(flags, ctx);
	if (flags->specifier)
		flags->specifier(ctx, flags);
	return (pos);
}


void		interceptor(t_ctx *ctx)
{
	int		i;
	int		j;
	int		current_arg;
	char	*format;

	i = 0;
	j = 0;
	current_arg = 0;
	ctx->buff_size = 0;
	format = ctx->format;
	while (format[i + j])
		if (format[i + j] == '%')
			i += new_arg(format + i + j, ctx, current_arg++);
		else
		{
			write(1, format + i + j, 1);
			j++;
		}
	ctx->buff_size += j;
}
/*
void		interceptor(t_ctx *ctx)
{
	int		i;
	int		j;
	int		current_arg;
	char	*format;

	i = 0;
	j = 0;
	current_arg = 0;
	format = ctx->format;
	while (format[i + j])
		if (format[i + j] == '%')
			i += new_arg(format + i + j, ctx, current_arg++);
		else
			j++;
	ctx->buff_size = j;
}
*/

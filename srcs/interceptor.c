/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interceptor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/27 17:42:00 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <s_ctx.h>
#include <flags.h>

//==77134==WARNING: unexpected format specifier in printf interceptor: %-01+

#include <unistd.h>

void	error()
{
	write (1, "ERROR\n", 6);
}

int		new_arg(char *arg, t_ctx *ctx)
{
	int		pos;
	t_flag	flag;

	// BZERO FLAG
	ctx->flag = &flag;
	pos = 0;
	if (arg[pos] >= '0' && arg[pos] <= '9')
		argument_access(arg, &pos, ctx);
	if (!ctx->flags.width)
		if (!flag(arg, &pos, ctx))
			error();
	pos += width_precision(arg + pos, ctx);
	pos += length(arg + pos, ctx);
	if (!specifier(arg, &pos, ctx))
		error();
	return (pos);
}

void		interceptor(t_ctx *ctx)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (ctx->text[i])
	{
		if (ctx->text[i] == '%')
			i += new_arg(ctx->text + i, ctx);
		else
			ctx->buff[] = ctx->text[i];
		i++;
	}
}

/*
void		interceptor(t_ctx *ctx)
{
	int		i;
	int		j;
	char	*text;

	i = 0;
	j = 0;
	text = ctx->text;
	while (text[i + j])
		if (text[i + j] == '%')
			if (text[++i + j] == '%')
				j++;
			else
				i += new_arg(text + i + j, ctx);
		else
			j++;
	ctx->buff_size = j;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/16 19:52:26 by gelambin         ###   ########.fr       */
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

int		new_arg(t_ctx *ctx, int *i, int current_arg)
{
	int				pos;

	pos = 0;
	if (!flag(ctx->text + *i, &pos, ctx->flags))
		error();
	if (!width_precision(ctx->text + *i, &pos, ctx->flags))
		error();
	if (!length(ctx->text + *i, &pos, ctx->flags))
		error();
	if (!specifier(ctx->text + *i, &pos, ctx->flags))
		error();
	return (pos);
}

int		get_buff_size(t_ctx *ctx)
{
	int	i;
	int	current_arg;
	int	size;

	i = 0;
	size = 0;
	current_arg = 0;
	while (ctx->text[i])
	{
		if (ctx->text[i] == '%')
			new_arg(ctx, &i, current_arg++);
		else
			size++;
		i++;
	}
	return (size);
}

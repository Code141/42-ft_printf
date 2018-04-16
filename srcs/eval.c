/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/16 21:37:21 by gelambin         ###   ########.fr       */
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

int		new_arg(char *arg, int current_arg, t_ctx *ctx)
{
	int				pos;

	pos = 0;
	if (!flag(arg, &pos, ctx->flags))
		error();
	if (!width_precision(arg, &pos, ctx->flags))
		error();
	if (!length(arg, &pos, ctx->flags))
		error();
	if (!specifier(arg, &pos, ctx->flags))
		error();
	return (pos);
}

int		get_buff_size(t_ctx *ctx)
{
	int		i;
	int		current_arg;
	int		size;
	char	*text;

	i = 0;
	size = 0;
	text = ctx->text;
	current_arg = 0;
	while (text[i])
	{
		//if (text[i] == '%' && ctx->text[i + 1] == '%')
		if (text[i] == '%' && text[i + 1] != '%')
			i += new_arg(text + i, current_arg++, ctx);
		else
			size++;
		i++;
	}
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/20 03:23:10 by gelambin         ###   ########.fr       */
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

int		new_arg(char *arg, t_flag *flags)
{
	int				pos;

	pos = 0;
	if (arg[pos] >= '0' && arg[pos] <= '9')
		argument_access(arg, &pos, flags);
	if (!flags->width)
		if (!flag(arg, &pos, flags))
			error();
	if (!width_precision(arg, &pos, flags))
		error();
	if (!length(arg, &pos, flags))
		error();
	if (!specifier(arg, &pos, flags))
		error();
	return (pos);
}

void		interceptor(t_ctx *ctx)
{
	int		i;
	int		current_arg;
	char	*text;

	i = 0;
	text = ctx->text;
	current_arg = 0;
	while (text[i])
	{
		//if (text[i] == '%' && ctx->text[i + 1] == '%')
		if (text[i] == '%' && text[i + 1] != '%')
			i += new_arg(text + i, ctx->flags + current_arg++);
		else
			ctx->buff_size++;
		i++;
	}
}

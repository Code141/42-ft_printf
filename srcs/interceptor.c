/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interceptor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/21 00:08:38 by gelambin         ###   ########.fr       */
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
	int	pos;

	pos = 0;
	if (arg[pos] >= '0' && arg[pos] <= '9')
		argument_access(arg, &pos, flags);
	if (!flags->width)
		if (!flag(arg, &pos, flags))
			error();
	pos += width_precision(arg + pos flags);
	pos += length(arg + pos, flags);
	if (!specifier(arg, &pos, flags))
		error();
	return (pos);
}

void		interceptor(t_ctx *ctx)
{
	int		i;
	int		j;
	int		current_arg;
	char	*text;

	i = 0;
	j = 0;
	current_arg = 0;
	text = ctx->text;
	while (text[i + j])
		if (text[i + j] == '%')
			if (text[++i + j] == '%')
				j++;
			else
				i += new_arg(text + i + j, ctx->flags + current_arg++);
		else
			j++;
	ctx->buff_size = j;
}

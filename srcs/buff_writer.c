/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 17:18:28 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 19:03:09 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	print_in_buffer(char c, int nb, t_ctx *ctx)
{
	ctx->buff_size += nb;
	while (nb --)
		write(1, &c, 1);
}

void	sign(char neg, char explicite, char space, t_ctx *ctx)
{
	if (neg)
		print_in_buffer('-', 1, ctx);
	else
		if (explicite)
			print_in_buffer('+', 1, ctx);
		else if (space)
			print_in_buffer(' ', 1, ctx);
}

void	alternate(char style, t_ctx *ctx)
{
		print_in_buffer('0', 1, ctx);
		if (style == 1)
			print_in_buffer('x', 1, ctx);
		else if (style == 2)
			print_in_buffer('X', 1, ctx);
}

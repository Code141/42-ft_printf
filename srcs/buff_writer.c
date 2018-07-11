/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 17:18:28 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/11 17:57:26 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

extern t_ctx *g_ctx;

void	print_in_buffer(char c, int nb)
{
	g_ctx->buff_size += nb;
	// DEPASSEMENT BUFFER !!!!!!!!
	// write(1, g_ctx->buffer, g_ctx->buff_size);
	while (nb--)
		g_ctx->buffer[g_ctx->buff_pos++] = c;

}

void	sign(char neg, char explicite, char space)
{
	if (neg)
		print_in_buffer('-', 1);
	else
		if (explicite)
			print_in_buffer('+', 1);
		else if (space)
			print_in_buffer(' ', 1);
}

void	alternate(char style)
{
		print_in_buffer('0', 1);
		if (style == 1)
			print_in_buffer('x', 1);
		else if (style == 2)
			print_in_buffer('X', 1);
}


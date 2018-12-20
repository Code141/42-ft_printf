/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 17:18:28 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/20 17:41:33 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	print_str_in_buffer(char *str, int nb)
{
}

void	print_in_buffer(char *str)
{
}

void	print_in_buffer_nb(char c, int nb)
{
	if (g_ctx.buff_size != -1)
	{
		g_ctx.buff_size += nb;
		if (g_ctx.buff_pos + nb > FT_PRINTF_BUFF_SIZE)
		{
			write(1, g_ctx.buffer, g_ctx.buff_pos);
			g_ctx.buff_pos = 0;
			while (nb--)
			{
				if (g_ctx.buff_pos == FT_PRINTF_BUFF_SIZE)
				{
					write(1, g_ctx.buffer, g_ctx.buff_pos);
					g_ctx.buff_pos = 0;
				}
				g_ctx.buffer[g_ctx.buff_pos++] = c;
			}
		}
		else
		{
			while (nb--)
				g_ctx.buffer[g_ctx.buff_pos++] = c;
		}
	}
}

void	sign(char neg, char explicite, char space)
{
	if (neg)
		print_in_buffer_nb('-', 1);
	else
		if (explicite)
			print_in_buffer_nb('+', 1);
		else if (space)
			print_in_buffer_nb(' ', 1);
}

void	alternate(char style)
{
	print_in_buffer_nb('0', 1);
	if (style == 1)
		print_in_buffer_nb('x', 1);
	else if (style == 2)
		print_in_buffer_nb('X', 1);
}


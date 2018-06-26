/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 17:18:28 by gelambin          #+#    #+#             */
/*   Updated: 2018/06/23 15:40:24 by gelambin         ###   ########.fr       */
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

/*----------------------------------------------------------------------------*/

// NE PAS DONNER CTX MAIS UN POINTEUR SUR CHAR !!

void	print_number_hex_uint8_t(uint8_t nb, int size, int style)
{
	char	c;
	int		pow;
	int		i;

	style = (style == 1) ? 39 : 7;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 16;
		c = (nb / pow) % 16 + '0';
		c = (c > 57) ? c + style : c;
		write(1, &c, 1);
	}
}

void	print_number_hex_uint16_t(uint16_t nb, int size, int style)
{
	char	c;
	int		pow;
	int		i;

	style = (style == 1) ? 39 : 7;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 16;
		c = (nb / pow) % 16 + '0';
		c = (c > 57) ? c + style : c;
		write(1, &c, 1);
	}
}

void	print_number_hex_uint32_t(uint32_t nb, int size, int style)
{
	char	c;
	int		pow;
	int		i;

	style = (style == 1) ? 39 : 7;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 16;
		c = (nb / pow) % 16 + '0';
		c = (c > 57) ? c + style : c;
		write(1, &c, 1);
	}
}

void	print_number_hex_uint64_t(uint64_t nb, int size, int style)
{
	char		c;
	uint64_t	pow;
	int			i;

	style = (style == 1) ? 39 : 7;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 16;
		c = (nb / pow) % 16 + '0';
		c = (c > 57) ? c + style : c;
		write(1, &c, 1);
	}
}

int		print_number_hex(t_va_data data, int size, int style, int length)
{
	if (length == 1)
		print_number_hex_uint8_t(data.uint8, size, style);
	else if (length == 2)
		print_number_hex_uint16_t(data.uint16, size, style);
	else if (length == 4)
		print_number_hex_uint32_t(data.uint32, size, style);
	else if (length == 8)
		print_number_hex_uint64_t(data.uint64, size, style);
	return (0);
}

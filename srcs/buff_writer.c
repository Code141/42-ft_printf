/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 17:18:28 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/18 02:54:00 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

int		number_width(t_va_data data, int base)
{
	int	size;

	size = 0;
	while (data.data)	// HERE COUNT BYTES
	{
		data.data /= base;
		size++;
	}

	return (size);
}

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


void	print_int(int nb, int size, t_ctx *ctx)
{
	char	c;
	int		pow;
	int		i;

	ctx->buff_size += size;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
			size--;
		}
		nb = -nb;
	}
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 10;
		c = nb / pow % 10 + '0';
		write(1, &c, 1);
	}
}


void	print_unsigned_int(unsigned int nb, int size, t_ctx *ctx)
{
	char	c;
	int		pow;
	int		i;

	ctx->buff_size += size;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 10;
		c = nb / pow % 10 + '0';
		write(1, &c, 1);
	}
}


void	print_unsigned_char(int nb, int size, t_ctx *ctx)
{
	char	c;
	int		pow;
	int		i;

	ctx->buff_size += size;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 8;
		c = nb / pow % 8 + '0';
		write(1, &c, 1);
	}
}



void	print_hex_high(unsigned int nb, int size, t_ctx *ctx)
{
	char	c;
	int		pow;
	int		i;

	ctx->buff_size += size;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 16;
		c = (nb / pow) % 16 + '0';
		c = (c > 57) ? c + 7 : c;
		write(1, &c, 1);
	}
}

void	print_hex_low(unsigned int nb, int size, t_ctx *ctx)
{
	char	c;
	int		pow;
	int		i;

	ctx->buff_size += size;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 16;
		c = (nb / pow) % 16 + '0';
		c = (c > 57) ? c + 39 : c;
		write(1, &c, 1);
	}
}

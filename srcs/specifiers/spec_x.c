/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:06:55 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 14:43:51 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	print_hex(unsigned int nb, int size, char style)
{
	char	c;
	int		pow;
	int		i;
	int		maj;

	maj = (style) ? 7 : 39;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 16;
		c = (nb / pow) % 16 + '0';
		c = (c > 57) ? c + maj : c;
		write(1, &c, 1);
	}
}

void	spec_x(t_ctx *ctx, t_flag *flags)
{
	int				width;
	int				precision;
	int				size;
	unsigned int	nb;
	int				style;

	nb = flags->data.x;
	style = (flags->specifier == 'X') ? 1 : 0;
	size = 0;
	while (nb)
	{
		nb /= 16;
		size++;
	}

	precision = 1;
	if (flags->precision != -1)
	{
		precision = flags->precision;
		flags->pad = 0;
	}

//---------	width
	width = (flags->alternate && flags->data.x != 0) * 2;


	width += (precision > size) ? precision : size;
	width = flags->width - width;
	if (width > 0)
		ctx->buff_size += width;
	if (!flags->left_align && !flags->pad)
			while (width-- > 0)
				write(1, " ", 1);

//---------		alternate (signe)

	if (flags->alternate && flags->data.x != 0)
	{
		if (style)
			write(1, "0X", 2);
		else
			write(1, "0x", 2);
		ctx->buff_size += 2;
	}

//---------	padded width

	if (!flags->left_align)
		while (width-- > 0)
			write(1, "0", 1);

//---------			precision	(dont care signe)

	if (precision > size)
		ctx->buff_size += precision - size;
	while (precision-- > size)
		write(1, "0", 1);

//---------			number

	print_hex(flags->data.x, size, style);
	ctx->buff_size += size;

//---------	! width !	(if) left aligne

	while (width-- > 0)
			write(1, " ", 1);
}

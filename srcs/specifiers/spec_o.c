/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 03:13:19 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 14:41:03 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	print_unsigned_char(int nb, int size)
{
	char	c;
	int		pow;
	int		i;

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

void	spec_o(t_ctx *ctx, t_flag *flags)
{
	int	width;
	int	precision;
	int	size;
	int	nb;

	nb = flags->data.o;

	size = 0;
	while (nb)
	{
		nb /= 8;
		size++;
	}
	
	precision = 1;
	if (flags->precision != -1)
	{
		precision = flags->precision;
		flags->pad = 0;
	}

//---------	width
	width = (flags->alternate);


	width += (precision > size) ? precision : size;
	width = flags->width - width;
	if (width > 0)
		ctx->buff_size += width;
	if (!flags->left_align && !flags->pad)
		while (width-- > 0)
			write(1, " ", 1);

//---------		alternate

	if (flags->alternate)
	{
		write(1, "0", 1);
		ctx->buff_size += 1;
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

	print_unsigned_char(flags->data.o, size);
	ctx->buff_size += size;

//---------	! width !	(if) left aligne

	while (width-- > 0)
			write(1, " ", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:19:17 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 19:03:26 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

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

void	spec_d(t_ctx *ctx, t_flag *flags)
{
	int		width;
	int		precision;
	int		size;
	int		nb;
	char	neg;

	nb = flags->data.d;

	neg = (nb < 0) ? 1 : 0;					// Differs
	size = 0;
	while (nb)
	{
		nb /= 10;
		size++;
	}

	precision = 1;
	if (flags->precision != -1)
	{
		precision = flags->precision;
		flags->pad = 0;
	}
	width = (neg || flags->space_for_sign || flags->explicite_sign);// Differs
	width += (precision > size) ? precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}
	sign(neg, flags->explicite_sign, flags->space_for_sign, ctx);	// Differs
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (precision > size)
		print_in_buffer('0', precision - size, ctx);
	print_int(flags->data.d, size, ctx);							// Differs
	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

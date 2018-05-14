/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 13:07:35 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 19:02:14 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

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

void	spec_u(t_ctx *ctx, t_flag *flags)
{
	int					width;
	int					precision;
	int					size;
	unsigned int		nb;

	nb = flags->data.u;

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
	width = (flags->space_for_sign || flags->explicite_sign);		// Differs
	width += (precision > size) ? precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}
	//Signe absent en unsigned
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (precision > size)
		print_in_buffer('0', precision - size, ctx);
	print_unsigned_int(flags->data.u, size, ctx);					// Differs
	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:06:55 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/15 16:13:34 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_x(t_ctx *ctx, t_flag *flags)
{
	int				width;
	int				precision;
	int				size;
	unsigned int	nb;
	int				style;

	nb = flags->data.x;
	style = (flags->specifier == 'x') ? 1 : 2;

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

	width = (flags->alternate && flags->data.x != 0) * 2;


	width += (precision > size) ? precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}
	if (flags->alternate && flags->data.x != 0)
		alternate(style, ctx);
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (precision > size)
		print_in_buffer('0', precision - size, ctx);
	if (style == 1)
		print_hex_low(flags->data.x, size, ctx);
	else
		print_hex_high(flags->data.x, size, ctx);
	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

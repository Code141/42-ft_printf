/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:06:55 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/21 15:38:24 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_x(t_ctx *ctx, t_flag *flags)
{
	int				width;
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

	width = (flags->alternate && flags->data.x != 0) * 2;			// Differs

	width += (flags->precision > size) ? flags->precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}
	if (flags->alternate && flags->data.x != 0)						// Differs
		alternate(style, ctx);										// Differs
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer('0', flags->precision - size, ctx);

	if (style == 1)													// Differs
		print_hex_low(flags->data.x, size, ctx);					// Differs
	else															// Differs
		print_hex_high(flags->data.x, size, ctx);					// Differs

	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

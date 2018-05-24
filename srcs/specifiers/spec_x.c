/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:06:55 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/24 14:01:05 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_x(t_ctx *ctx, t_flag *flags)
{
	int				width;
	int				size;
	int				style;

	size = number_width(flags->data, 16, flags->length);

	style = (flags->specifier == 'x') ? 1 : 2;


	width = (flags->alternate && flags->data.uint64 != 0) * 2;			// Differs

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

	ctx->buff_size += size;
	print_number_hex(flags->data, size, style, flags->length);	// Differs

	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

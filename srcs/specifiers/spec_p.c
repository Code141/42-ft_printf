/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 15:22:27 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/23 23:17:58 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_p(t_ctx *ctx, t_flag *flags)
{
	int				width;
	int				size;
	int				style;

	style = 1;
	flags->alternate = 1;
	flags->length = 8;

	size = number_width(flags->data, 16, flags->length);


	width = (flags->alternate) * 2;			// Differs

	width += (flags->precision > size) ? flags->precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}
	if (flags->alternate)											// Differs
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 15:22:27 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/01 23:36:36 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

extern t_ctx *g_ctx;

void	spec_p(t_flag *flags)
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
		print_in_buffer(' ', width);
		width = 0;
	}
	if (flags->alternate)											// Differs
		alternate(style);										// Differs
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer('0', flags->precision - size);

	g_ctx->buff_size += size;
	print_number_hex(flags->data, size, style, flags->length);	// Differs

	if (width > 0)
		print_in_buffer(' ', width);
}

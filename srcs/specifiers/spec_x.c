/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:06:55 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/11 13:19:56 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

extern t_ctx *g_ctx;

void	spec_x(t_flag *flags)
{
	int				width;
	int				size;
	int				style;

	size = number_width(flags->data, 16, flags->length);

	style = (flags->specifier == 'x') ? 1 : 2;


	width = (flags->alternate && size != 0) ? 2 : 0;			// Differs

	width += (flags->precision > size) ? flags->precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width);
		width = 0;
	}
	if (flags->alternate && size != 0)						// Differs
		alternate(style);										// Differs
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer('0', flags->precision - size);

	print_number_hex(flags->data, size, style, flags->length);	// Differs

	if (width > 0)
		print_in_buffer(' ', width);
}

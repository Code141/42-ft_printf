/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 03:13:19 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/23 17:29:44 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_o(t_ctx *ctx, t_flag *flags)
{
	int	width;
	int	size;

	size = number_width(flags->data, 8, flags->length);

	width = (flags->alternate);										// Differs

	width += (flags->precision > size) ? flags->precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}

	if (flags->alternate)											// Differs
		alternate(0, ctx);											// Differs

	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer('0', flags->precision - size, ctx);
	
	ctx->buff_size += size;
	print_number(flags->data, size, 8, flags->length);			// Differs

	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

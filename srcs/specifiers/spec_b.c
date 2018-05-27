/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 18:18:23 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/27 20:25:41 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_b(t_ctx *ctx, t_flag *flags)
{
	int	width;
	int	size;

	size = number_width(flags->data, 2, flags->length);

	width = (flags->alternate && flags->precision <= size);			// differs

	width += (flags->precision > size) ? flags->precision : size;

	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}

	if (flags->alternate  && flags->precision <= size)					// differs
		alternate(0, ctx);											// differs

	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer('0', flags->precision - size, ctx);

		ctx->buff_size += size;
		print_number(flags->data, size, 2, flags->length);			// differs

	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

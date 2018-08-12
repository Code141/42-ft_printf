/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 13:07:35 by gelambin          #+#    #+#             */
/*   Updated: 2018/08/11 19:42:16 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

extern t_ctx *g_ctx;

void	spec_u(t_flag *flags)
{
	int					width;
	int					size;

	size = number_width(flags->data, 10, flags->length);

	width = (flags->precision > size) ? flags->precision : size;

	width = flags->width - width;

	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width);
		width = 0;
	}

	//Signe absent en unsigned										// Differs

	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer('0', flags->precision - size);

	print_number(flags->data, size, 10, flags->length);				// Differs

	if (width > 0)
		print_in_buffer(' ', width);
}

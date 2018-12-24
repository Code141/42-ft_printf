/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 17:43:02 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/23 17:43:17 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <s_ctx.h>
#include <buff_writer.h>

void	spec_f(t_flag *flags)
{
	int	width;
	int	size;

	size = number_width(flags->data, 8, flags->length);

	width = (flags->alternate && flags->precision <= size);			// Differs

	width += (flags->precision > size) ? flags->precision : size;

	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer_nb(' ', width);
		width = 0;
	}

	if (flags->alternate  && flags->precision <= size)				// Differs
		alternate(0);												// Differs

	if (width > 0 && !flags->left_align)
	{
		print_in_buffer_nb('0', width);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer_nb('0', flags->precision - size);

		print_number(flags->data, size, 8, flags->length);			// Differs

	if (width > 0)
		print_in_buffer_nb(' ', width);
}

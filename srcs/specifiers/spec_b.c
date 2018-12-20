/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 18:18:23 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/20 17:27:53 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_b(t_flag *flags)
{
	int	width;
	int	size;

	size = number_width(flags->data, 2, flags->length);

	width = (flags->alternate && flags->precision <= size);			// differs

	width += (flags->precision > size) ? flags->precision : size;

	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer_nb(' ', width);
		width = 0;
	}

	if (flags->alternate  && flags->precision <= size)			// differs
		alternate(0);											// differs

	if (width > 0 && !flags->left_align)
	{
		print_in_buffer_nb('0', width);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer_nb('0', flags->precision - size);

	print_number(flags->data, size, 2, flags->length);			// differs

	if (width > 0)
		print_in_buffer_nb(' ', width);
}

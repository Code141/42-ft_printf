/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 13:07:35 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/20 21:07:59 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_u(t_flag *flags)
{
	int	width;
	int	size;

	size = number_width(flags->data, 10, flags->length);

	width = (flags->precision > size) ? flags->precision : size;

	width = flags->width - width;

	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer_nb(' ', width);
		width = 0;
	}

	//Signe absent en unsigned										// Differs

	if (width > 0 && !flags->left_align)
	{
		print_in_buffer_nb('0', width);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer_nb('0', flags->precision - size);

	print_number(flags->data, size, 10, flags->length);				// Differs

	if (width > 0)
		print_in_buffer_nb(' ', width);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:19:17 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/20 17:27:53 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_d(t_flag *flags)
{
	int		width;
	int		size;

	size = number_width(flags->data, 10, flags->length);

	width = (flags->neg || flags->space_for_sign || flags->explicite_sign);

	width += (flags->precision > size) ? flags->precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer_nb(' ', width);
		width = 0;
	}

	sign(flags->neg, flags->explicite_sign, flags->space_for_sign);

	if (width > 0 && !flags->left_align)
	{
		print_in_buffer_nb('0', width);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer_nb('0', flags->precision - size);

	print_number(flags->data, size, 10, flags->length);

	if (width > 0)
		print_in_buffer_nb(' ', width);
}

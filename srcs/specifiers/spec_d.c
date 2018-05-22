/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:19:17 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/21 23:40:03 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_d(t_ctx *ctx, t_flag *flags)
{
	int		width;
	int		size;
	int		nb;

	nb = flags->data.d;

	size = 0;
	while (nb)
	{
		nb /= 10;
		size++;
	}

	width = (flags->neg || flags->space_for_sign || flags->explicite_sign);

	width += (flags->precision > size) ? flags->precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}

	sign(flags->neg, flags->explicite_sign, flags->space_for_sign, ctx);

	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (flags->precision > size)
		print_in_buffer('0', flags->precision - size, ctx);

	print_unsigned_int(flags->data.d, size, ctx);

	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

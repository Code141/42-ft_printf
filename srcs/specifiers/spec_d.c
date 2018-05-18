/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:19:17 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/16 15:28:39 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_d(t_ctx *ctx, t_flag *flags)
{
	int		width;
	int		precision;
	int		size;
	int		nb;
	char	neg;

	nb = flags->data.d;

	neg = (nb < 0) ? 1 : 0;					// Differs
/*
	size = 0;
	while (nb)
	{
		nb /= 10;
		size++;
	}
*/
	size = number_width(flags->data, 10);

	precision = 1;
	if (flags->precision != -1)
	{
		precision = flags->precision;
		flags->pad = 0;
	}
	width = (neg || flags->space_for_sign || flags->explicite_sign);// Differs
	width += (precision > size) ? precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}
	sign(neg, flags->explicite_sign, flags->space_for_sign, ctx);	// Differs
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (precision > size)
		print_in_buffer('0', precision - size, ctx);
	print_int(flags->data.d, size, ctx);							// Differs
	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

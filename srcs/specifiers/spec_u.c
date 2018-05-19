/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 13:07:35 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/19 19:24:07 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	spec_u(t_ctx *ctx, t_flag *flags)
{
	int					width;
	int					precision;
	int					size;
	unsigned int		nb;

	nb = flags->data.u;

	size = 0;
	while (nb)
	{
		nb /= 10;
		size++;
	}

	precision = 1;
	if (flags->precision != -1)
	{
		precision = flags->precision;
		flags->pad = 0;
	}
	width = 0;														// Differs
	width += (precision > size) ? precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}
	//Signe absent en unsigned
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (precision > size)
		print_in_buffer('0', precision - size, ctx);
	print_unsigned_int(flags->data.u, size, ctx);					// Differs
	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

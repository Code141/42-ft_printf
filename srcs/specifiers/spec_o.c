/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 03:13:19 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 19:02:36 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	print_unsigned_char(int nb, int size, t_ctx *ctx)
{
	char	c;
	int		pow;
	int		i;

	ctx->buff_size += size;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 8;
		c = nb / pow % 8 + '0';
		write(1, &c, 1);
	}
}

void	spec_o(t_ctx *ctx, t_flag *flags)
{
	int	width;
	int	precision;
	int	size;
	int	nb;

	nb = flags->data.o;

	size = 0;
	while (nb)
	{
		nb /= 8;
		size++;
	}
	
	precision = 1;
	if (flags->precision != -1)
	{
		precision = flags->precision;
		flags->pad = 0;
	}

	width = (flags->alternate);


	width += (precision > size) ? precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}
	if (flags->alternate)
		alternate(0, ctx);
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (precision > size)
		print_in_buffer('0', precision - size, ctx);
	print_unsigned_char(flags->data.o, size, ctx);
	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

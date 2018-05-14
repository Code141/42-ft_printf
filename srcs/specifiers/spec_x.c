/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:06:55 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 19:02:23 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <buff_writer.h>

void	print_hex(unsigned int nb, int size, char style, t_ctx *ctx)
{
	char	c;
	int		pow;
	int		i;
	int		maj;

	ctx->buff_size += size;
	maj = (style == 1) ? 39 : 7;
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 16;
		c = (nb / pow) % 16 + '0';
		c = (c > 57) ? c + maj : c;
		write(1, &c, 1);
	}
}

void	spec_x(t_ctx *ctx, t_flag *flags)
{
	int				width;
	int				precision;
	int				size;
	unsigned int	nb;
	int				style;

	nb = flags->data.x;
	style = (flags->specifier == 'x') ? 1 : 2;

	size = 0;
	while (nb)
	{
		nb /= 16;
		size++;
	}

	precision = 1;
	if (flags->precision != -1)
	{
		precision = flags->precision;
		flags->pad = 0;
	}

	width = (flags->alternate && flags->data.x != 0) * 2;


	width += (precision > size) ? precision : size;
	width = flags->width - width;
	if (width > 0 && !flags->left_align && !flags->pad)
	{
		print_in_buffer(' ', width, ctx);
		width = 0;
	}
	if (flags->alternate && flags->data.x != 0)
		alternate(style, ctx);
	if (width > 0 && !flags->left_align)
	{
		print_in_buffer('0', width, ctx);
		width = 0;
	}
	if (precision > size)
		print_in_buffer('0', precision - size, ctx);
	print_hex(flags->data.x, size, style, ctx);
	if (width > 0)
		print_in_buffer(' ', width, ctx);
}

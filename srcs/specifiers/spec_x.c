/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:06:55 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/10 22:37:45 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	print_hex(unsigned int nb, int size, char style)
{
	char	c;
	int		pow;
	int		i;

	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 16;
		c = (nb / pow) % 16 + '0';
		if (style)
			c = (c > 57) ? c + 7 : c;
		else
			c = (c > 57) ? c + 39 : c;
		write(1, &c, 1);
	}
}


void	spec_x(t_ctx *ctx, t_flag *flags)
{
	int				width;
	int				precision;
	int				size;
	unsigned int	nb;

	nb = flags->data.x;
	size = 0;
	while (nb)
	{
		nb /= 16;
		size++;
	}
	if (!size)
		size = 1;


	precision = (flags->precision == -1) ? 1 : flags->precision;
	width = (flags->space_for_sign || flags->explicite_sign);
	width += (precision > size) ? precision : size;
	width = flags->width - width;

	if (width > 0)
		ctx->buff_size += width;
	if (!flags->left_align && (flags->precision != -1 || !flags->pad))
		while (width-- > 0)
			write(1, " ", 1);

	if (precision > size)
		ctx->buff_size += precision - size;
	while (precision-- > size)
		write(1, "0", 1);



	print_hex(flags->data.x, size, (flags->specifier == 'X') ? 1 : 0);
	ctx->buff_size += size;

	while (width-- > 0)
			write(1, " ", 1);
}

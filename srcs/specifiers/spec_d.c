/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:19:17 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/09 19:37:24 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	print_int(int nb, int size)
{
	char	c;
	int		pow;
	int		i;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
			size--;
		}
		nb = -nb;
	}
	while (size--)
	{
		i = size;
		pow = 1;
		while (i--)
			pow = pow * 10;
		c = nb / pow % 10 + '0';
		write(1, &c, 1);
	}
}

void	spec_d(t_ctx *ctx, t_flag *flags)
{
	int		nb_size;
	int		size;
	int		nb;
	int		neg;
	int		precision;

	nb = flags->data.d;
	neg = (nb < 0) ? 1 : 0;

	size = 0;
	while (nb)
	{
		nb /= 10;
		size++;
	}

	precision = (flags->precision == -1) ? 1 : flags->precision;

	ctx->buff_size += size;
// PRECISION -1 defaut // 0/1 problemes
	nb_size = (neg || flags->space_for_sign || flags->explicite_sign);
	nb_size += (precision > size) ? precision : size;
	nb_size = flags->width - nb_size;

//---------	width

	if (nb_size > 0)
		ctx->buff_size += nb_size;

	if (!flags->left_align && (flags->precision != -1 || !flags->pad))
		while (nb_size-- > 0)
			write(1, " ", 1);

//---------		signe

	if (neg || flags->space_for_sign || flags->explicite_sign)
		ctx->buff_size++;
	if (neg)
		write (1, "-", 1);
	else
		if (flags->explicite_sign)
			write (1, "+", 1);
		else if (flags->space_for_sign)
			write (1, " ", 1);

	if (!flags->left_align)
		while (nb_size-- > 0)
			write(1, "0", 1);

//---------			precision	(dont care signe)

	if (precision > size)
		ctx->buff_size += precision - size;
	while (precision-- > size)
		write(1, "0", 1);

//---------			number

	print_int(flags->data.d, size);

//---------	! width !	(if) left aligne

	while (nb_size-- > 0)
			write(1, " ", 1);
}

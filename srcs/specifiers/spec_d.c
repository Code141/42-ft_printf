/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:19:17 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/08 18:48:01 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <s_ctx.h>

void	spec_d(t_ctx *ctx, t_flag *flags)
{
	int		nb_size;
	int		size;
	int		nb;
	int		neg;

	nb = flags->data.d;
	neg = (nb < 0) ? 1 : 0;
	size = 1;
	while (nb /= 10)
		size++;
	ctx->buff_size += size;

if (flags->explicite_sign)
printf("\n|flag->explicite_sign|");
printf("\n|flag->width|%d||\n", flags->width);
printf("|flag->precision|%d||\n", flags->precision);
printf("|size|%d||\n", size);

	nb_size = (neg || flags->space_for_sign || flags->explicite_sign);
printf("|bool|%d||\n", nb_size);

	nb_size += (flags->precision > size) ? flags->precision : size;
printf("|bigger|%d||\n", nb_size);

	nb_size = flags->width - nb_size;
printf("|width|%d||\n", nb_size);


//---------	width

	if (nb_size > 0)
		ctx->buff_size += nb_size;

	if (!flags->left_align)
		while (nb_size-- > 0)
			write(1, "*", 1);

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

//---------			precision	(dont care signe)

	if (flags->precision > size)
		ctx->buff_size += flags->precision - size;
	while (flags->precision-- > size)
		write(1, "_", 1);

//---------			number

	nb = flags->data.d;
	while (size--)
		write(1, "1", 1);

//---------	! width !	(if) left aligne

		while (--nb_size > 0)
			write(1, " ", 1);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:06:55 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/10 19:42:07 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	print_hex(unsigned int nb, int size)
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
		c = (c > 57) ? c + 39 : c;
		write(1, &c, 1);
	}
}


void	spec_x(t_ctx *ctx, t_flag *flags)
{
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
	{
		write(1, "0", 1);
		ctx->buff_size += 1;
	}
	else
	{
		ctx->buff_size += size;
		print_hex(flags->data.x, size);
	}
}


void	print_HEX(unsigned int nb, int size)
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
		c = (c > 57) ? c + 7 : c;
		write(1, &c, 1);
	}
}


void	spec_X(t_ctx *ctx, t_flag *flags)
{
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
	{
		write(1, "0", 1);
		ctx->buff_size += 1;
	}
	else
	{
		ctx->buff_size += size;
		print_HEX(flags->data.x, size);
	}
}

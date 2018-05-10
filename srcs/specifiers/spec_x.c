/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:06:55 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/10 17:12:39 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	print_hex(int nb, int size)
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


void	spec_x(t_ctx *ctx, t_flag *flags)
{

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:18:36 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/09 19:52:40 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	spec_c(t_ctx *ctx, t_flag *flags)
{
	if (flags->width)
		ctx->buff_size += flags->width - 1;
	if (!flags->left_align)
	{
		if (!flags->pad)
			while (flags->width-- > 1)
				write(1, " ", 1);
		else
			while (flags->width-- > 1)
				write(1, "0", 1);
	}
	write(1, &flags->data.c, 1);
	ctx->buff_size++;
	while (flags->width-- > 1)
		write(1, " ", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:15:42 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 19:01:39 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	spec_percent(t_ctx *ctx, t_flag *flags)
{
	if (flags->width)
		ctx->buff_size += flags->width - 1;
	if (!flags->left_align)
	{
		while (flags->width-- > 1)
			if (flags->pad)
				write(1, "0", 1);
			else
				write(1, " ", 1);
	}
	write(1, "%", 1);
	ctx->buff_size++;
	while (flags->width-- > 1)
			write(1, " ", 1);
}

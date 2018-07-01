/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:15:42 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/01 23:37:06 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

extern t_ctx *g_ctx;

void	spec_percent(t_flag *flags)
{
	if (flags->width)
		g_ctx->buff_size += flags->width - 1;
	if (!flags->left_align)
	{
		while (flags->width-- > 1)
			if (flags->pad)
				write(1, "0", 1);
			else
				write(1, " ", 1);
	}
	write(1, "%", 1);
	g_ctx->buff_size++;
	while (flags->width-- > 1)
			write(1, " ", 1);
}

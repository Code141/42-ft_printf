/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:15:42 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/20 17:28:47 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	spec_percent(t_flag *flags)
{
	int width;

	width = (flags->width > 0) ? flags->width - 1 : 0;
	if (!flags->left_align)
	{
		if (!flags->pad)
			print_in_buffer_nb(' ', width);
		else
			print_in_buffer_nb('0', width);
		width = 0;
	}
	print_in_buffer_nb('%', 1);
	print_in_buffer_nb(' ', width);
}

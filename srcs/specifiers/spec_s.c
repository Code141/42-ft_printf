/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 12:19:21 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/07 19:37:29 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	spec_c(t_ctx *ctx, t_flag *flags)
{
	write(1, flags->data.s, 1);
}

void	spec_s(t_ctx *ctx, t_flag *flags)
{
	int		i;
	char	*str;

	i = 0;
	str = flags->data.s;
	while (str[i])
		i++;
	write(1, str, i);
}

void	spec_d(t_ctx *ctx, t_flag *flags)
{

}

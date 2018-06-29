/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 12:19:21 by gelambin          #+#    #+#             */
/*   Updated: 2018/06/29 23:01:24 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	spec_s(t_ctx *ctx, t_flag *flags)
{
	int		i;
	int		size;
	char	*str;

	str = "(null)";
	i = 6;
	if (flags->data.s)
	{
		str = flags->data.s;
		i = 0;
		while (str[i])
			i++;
	}
	if (i > flags->precision)
		i = (flags->precision != -1) ? flags->precision : i;
	size = (flags->width > i) ? flags->width - i : 0;
	if (size)
		ctx->buff_size += size;
	if (!flags->left_align)
	{
		if (!flags->pad)
			while (size-- > 0)
				write(1, " ", 1);
		else
			while (size-- > 0)
				write(1, "0", 1);
	}

	ctx->buff_size += i;

	write(1, str, i);

	while (size-- > 0)
		write(1, " ", 1);
}

void	spec_S(t_ctx *ctx, t_flag *flags)
{
	int		i;
	int		size;
	int	*str;

	if (!flags->data.s)
	{
		write (1, "(null)", 6);
		ctx->buff_size += 6;
		return ;
	}

	str = flags->data.s;
	i = 0;
	while (str[i])
		i++;

	if (i > flags->precision)
		i = (flags->precision != -1) ? flags->precision : i;

	size = (flags->width > i) ? flags->width - i : 0;


	if (size)
		ctx->buff_size += size;
	if (!flags->left_align)
	{
		if (!flags->pad)
			while (size-- > 0)
				write(1, " ", 1);
		else
			while (size-- > 0)
				write(1, "0", 1);
	}

	int	j;
	j = 0;

	int k;
	k = 0;

	while (j < i)
	{
		spec_c_unicode(str[j++], ctx);
	}


	while (size-- > 0)
		write(1, " ", 1);
}

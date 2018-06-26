/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 12:19:21 by gelambin          #+#    #+#             */
/*   Updated: 2018/06/25 17:27:44 by gelambin         ###   ########.fr       */
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
	char	*str;

	str = "(null)";
	i = 6;
	if (flags->data.s)
	{
		str = flags->data.s;
		i = 0;
		while (str[i])
			i++;

		ft_printf("%.8hhb 0\n", str[0]);
		ft_printf("%.8hhb 1\n", str[1]);
		ft_printf("%.8hhb 2\n", str[2]);
		ft_printf("%.8hhb 3\n", str[3]);
		ft_printf("%.8hhb 4\n", str[4]);
		ft_printf("%.8hhb 5\n", str[5]);
		ft_printf("%.8hhb 6\n", str[6]);
		ft_printf("%.8hhb 7\n", str[7]);
		ft_printf("%.8hhb 8\n", str[8]);
		ft_printf("%.8hhb 9\n", str[9]);

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

	int	j;
	j = 0;

	while (j < i)
	{

		ft_printf("{J:%d}{I:%d}\n\n", j, i);

		if (str[j] & 0x80)
		{
			j += spec_c_unicode((uint32_t)(str + j), ctx);
		}
		else
		{
			write(1, str[j++], 1);
		}

	}


	while (size-- > 0)
		write(1, " ", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 12:19:21 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/01 23:42:32 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

extern t_ctx *g_ctx;

void	spec_s(t_flag *flags)
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
		g_ctx->buff_size += size;
	if (!flags->left_align)
	{
		if (!flags->pad)
			while (size-- > 0)
				write(1, " ", 1);
		else
			while (size-- > 0)
				write(1, "0", 1);
	}

	g_ctx->buff_size += i;

	write(1, str, i);

	while (size-- > 0)
		write(1, " ", 1);
}

void	spec_S(t_flag *flags)
{
	int		octal_size;
	int		size;
	int		*str;

	int		j;
	int		k;

	if (!flags->data.s)
	{
		write (1, "(null)", 6);
		g_ctx->buff_size += 6;
		return ;
	}

	str = flags->data.s;
	octal_size = strlen_unicode(str, flags->precision);

	if (octal_size > flags->precision)
		octal_size = (flags->precision != -1) ? flags->precision : octal_size;

	size = (flags->width > octal_size) ? flags->width - octal_size : 0;

	if (size)
		g_ctx->buff_size += size;

	if (!flags->left_align)
	{
		if (!flags->pad)
			while (size-- > 0)
				write(1, " ", 1);
		else
			while (size-- > 0)
				write(1, "0", 1);
	}

	j = 0;
	k = 0;

	if (flags->precision != -1)
		while (str[j] && k + unicode_size(*str) <= flags->precision )
			k += spec_c_unicode(str[j++]);
	else
		while (str[j])
			spec_c_unicode(str[j++]);

	while (size-- > 0)
		write(1, " ", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 12:19:21 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/08 16:07:06 by gelambin         ###   ########.fr       */
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
	
	if (!flags->left_align)
	{
		if (!flags->pad)
			print_in_buffer(' ', size);
		else
			print_in_buffer('0', size);
		size = 0;
	}

	int k;

	k = 0;
	while (k < i)
		print_in_buffer(str[k++], 1);

	print_in_buffer(' ', size);
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
		spec_s(flags);
		return ;
	}

	str = flags->data.s;
	octal_size = strlen_unicode(str, flags->precision);
	if (octal_size > flags->precision)
		octal_size = (flags->precision != -1) ? flags->precision : octal_size;
	size = (flags->width > octal_size) ? flags->width - octal_size : 0;
	if (!flags->left_align)
	{
		if (!flags->pad)
			print_in_buffer(' ', size);
		else
			print_in_buffer('0', size);
		size = 0;
	}

	j = 0;
	k = 0;
	if (flags->precision != -1)
		while (str[j] && k + unicode_size(str[j]) <= flags->precision )
			k += spec_c_unicode(str[j++]);
	else
		while (str[j])
			spec_c_unicode(str[j++]);
	print_in_buffer(' ', size);
}

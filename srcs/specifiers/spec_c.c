/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:18:36 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/08 18:02:11 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <stdlib.h> // MB_CUR_MAX

extern t_ctx *g_ctx;

//WARNING    MB_CUR_MAX (jamais afficher plus que MBCURMAX, setlocal ou pas)

int	strlen_unicode(int *str, unsigned int limit) // !! CAST -1 devient max int
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str < 0x80 && i + 1 <= limit && MB_CUR_MAX >= 1)
			i += 1;
		else if (*str < 0x800 && i + 2 <= limit && MB_CUR_MAX >= 2)
			i += 2;
		else if (*str < 0x10000 && i + 3 <= limit && MB_CUR_MAX >= 3)
			i += 3;
		else if (*str < 0x200000 && i + 4 <= limit && MB_CUR_MAX >= 4)
			i += 4;
		else
			return (i);
		str++;
	}
	return (i);
}

int	unicode_size(uint32_t ca)
{
	if (ca < 0x80 && MB_CUR_MAX >= 1)
		return (1);
	else if (ca < 0x800 && MB_CUR_MAX >= 2)
		return (2);
	else if (ca < 0x10000 && MB_CUR_MAX >= 3)
		return (3);
	else if (ca < 0x200000 && MB_CUR_MAX >= 4)
		return (4);
	return (1);
}

int	spec_c_unicode(uint32_t ca)
{
	char str[4];
	int nb_octets;

	if (ca < 0x80)
	{
		str[0] = ca;
		nb_octets = 1;
	}
	else if (ca < 0x800)
	{
		str[1] = 0x80 | (ca & 0x3F);
		str[0] = 0xC0 | ((ca & 0x7C0) >> 6);
		nb_octets = 2;
	}
	else if (ca < 0x10000)
	{
		str[2] = 0x80 | (ca & 0x3F);
		str[1] = 0x80 | ((ca & 0xFC0) >> 6);
		str[0] = 0xE0 | ((ca & 0xF000) >> 12);
		nb_octets = 3;
	}
	else if (ca < 0x200000)
	{
		str[3] = 0x80 | (ca & 0x3F);
		str[2] = 0x80 | ((ca & 0xFC0) >> 6);
		str[1] = 0x80 | ((ca & 0x3F000) >> 12);
		str[0] = 0xF0 | ((ca & 0x1C0000) >> 18);
		nb_octets = 4;
	}

	int i;			// reverse octal position and supress I counter | decrement on octal_size
	i = 0;
	while (i < nb_octets)
		print_in_buffer(str[i++], 1);
	return (nb_octets);

	/*----------------------------------------------------------------------*/
	/*
	str[0] = 0;
	str[1] = 0;
	str[2] = 0;
	str[3] = 0;


	int i;
	char mask;


	if (ca < 0x80)
	{
//	write (1, &ca, 1);
	g_ctx->buff_size++;
	return (1);
	}

	i = 0;
	mask = 0x80;
	while (ca)
	{
	str[i] = ca & 0x3f;
	ca = ca >> 6;
	if (ca)
	str[i] += 0x80;
	else if (str[i] & ((mask >> 1) + 0x80))
	{
	str[i++] += 0x80;
	str[i--] = mask >> 1 + 0x80;
	}
	else
	str[i--] += mask;
	mask = mask >> 1 + 0x80;
	i++;
	}
	g_ctx->buff_size += i + 1;
	while (i >= 0)
//	write (1, str + i--, 1);
	*/
}

void	spec_c(t_flag *flags)
{
	char	c;
	int		width;


	c = flags->data.c;
	width = 0;

	if (flags->width)
		width = flags->width - unicode_size(flags->data.uint32);

	width = (width > 0) ? width : 0;

	if (!flags->left_align)
	{
		if (!flags->pad)
			print_in_buffer(' ', width);
		else
			print_in_buffer('0', width);
		width = 0;
	}

	if (flags->specifier == 'C' || flags->length == 8)
		spec_c_unicode(flags->data.uint32);
	else
		print_in_buffer(c, 1);

	print_in_buffer(' ', width);
}


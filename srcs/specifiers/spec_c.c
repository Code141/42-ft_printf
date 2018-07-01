/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:18:36 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/01 23:38:38 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

extern t_ctx *g_ctx;

//WARNING    MB_CUR_MAX (jamais afficher plus que MBCURMAX, setlocal ou pas)

int	strlen_unicode(int *str, unsigned int limit) // !! CAST -1 devient max int
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str < 0x80 && i + 1 <= limit)
			i += 1;
		else if (*str < 0x800 && i + 2 <= limit)
			i += 2;
		else if (*str < 0x10000 && i + 3 <= limit)
			i += 3;
		else if (*str < 0x200000 && i + 4 <= limit)
			i += 4;
		else
			return (i);
		str++;
	}
	return (i);
}

int	unicode_size(uint32_t ca)
{
	if (ca < 0x80)
		return (1);
	else if (ca < 0x800)
		return (2);
	else if (ca < 0x10000)
		return (3);
	else if (ca < 0x200000)
		return (4);
	return (0);
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

	write(1, str, nb_octets);
	g_ctx->buff_size += nb_octets;
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
	write (1, &ca, 1);
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
	write(1, str + i--, 1);
	*/
}

void	spec_c(t_flag *flags)
{
	char c;

	c = flags->data.c;

	if (flags->width)
		g_ctx->buff_size += flags->width - 1;
	if (!flags->left_align)
	{
		if (!flags->pad)
			while (flags->width-- > 1)
				write(1, " ", 1);
		else
			while (flags->width-- > 1)
				write(1, "0", 1);
	}

	if (flags->specifier == 'C' || flags->length == 8)
		spec_c_unicode(flags->data.uint32);
	else
	{
		write(1, &c, 1);
		g_ctx->buff_size++;
	}


	while (flags->width-- > 1)
		write(1, " ", 1);
}


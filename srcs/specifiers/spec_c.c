/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:18:36 by gelambin          #+#    #+#             */
/*   Updated: 2018/06/25 17:32:31 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

//WARNING    MB_CUR_MAX (jamais afficher plus que MBCURMAX, setlocal ou pas)

int	spec_c_unicode(uint32_t ca,  t_ctx *ctx)
{
	char str[4];
	int nb_octets;

	nb_octets = 1;

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
		ctx->buff_size += nb_octets;

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
		ctx->buff_size++;
		return;
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
	ctx->buff_size += i + 1;
	while (i >= 0)
		write(1, str + i--, 1);
*/
}

void	spec_c(t_ctx *ctx, t_flag *flags)
{
	char *c;
	c = flags->data.wcc;

	if (flags->width)
		ctx->buff_size += flags->width - 1;
	if (!flags->left_align)
	{
		if (!flags->pad)
			while (flags->width-- > 1)
				write(1, " ", 1);
		else
			while (flags->width-- > 1)
				write(1, "0", 1);
	}

		spec_c_unicode(flags->data.uint32,ctx);

	while (flags->width-- > 1)
		write(1, " ", 1);
}


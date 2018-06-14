/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:18:36 by gelambin          #+#    #+#             */
/*   Updated: 2018/06/13 23:33:16 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <s_ctx.h>


void	spec_c(t_ctx *ctx, t_flag *flags)
{
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

	char *c;

	c = flags->data.wcc;

	ft_printf("%.8b", c[3]);
	ft_printf("%.8b", c[2]);
	ft_printf("%.8b", c[1]);
	ft_printf("%.8b", c[0]);

/*
if (c & 0x80)
	printf("UNI");


	if (flags->specifier == 'C')
	{
	}
	else
		write(1, &c, 1);
*/
	ctx->buff_size++;
	while (flags->width-- > 1)
		write(1, " ", 1);
}



/*
static int		type_four_c(char **s, int **i, wchar_t data, t_dat **d)
{
	char		*sdata;
	int			ret;
 
	if ((sdata = ft_memalloc(sizeof(char) * 5)) == NULL)
		return (-1);
	sdata[0] = (((data & 0x1c0000) >> 18) + 0xF0);
	sdata[1] = (((data & 0x03F000) >> 12) + 0x80);
	sdata[2] = (((data & 0x0Fc0) >> 6) + 0x80);
	sdata[3] = ((data & 0x003F) + 0x80);
	sdata[4] = '\0';
	ret = type_str(s, i, sdata, d);
	ft_memdel((void**)&sdata);
	return (ret);
}

*/

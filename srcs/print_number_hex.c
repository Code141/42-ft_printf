/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:13:45 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/19 18:32:16 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <precalculated_decimales.h>

void	print_number_hex_uint8_t(uint8_t nb, int size, int style)
{
	char	c;

	style = (style == 1) ? 39 : 7;
	while (size--)
	{
		c = (nb / g_precalculated_uint_8[16][size]) % 16 + '0';
		c = (c > 57) ? c + style : c;
		print_in_buffer(c, 1);
	}
}

void	print_number_hex_uint16_t(uint16_t nb, int size, int style)
{
	char	c;

	style = (style == 1) ? 39 : 7;
	while (size--)
	{
		c = (nb / g_precalculated_uint_16[16][size]) % 16 + '0';
		c = (c > 57) ? c + style : c;
		print_in_buffer(c, 1);
	}
}

void	print_number_hex_uint32_t(uint32_t nb, int size, int style)
{
	char	c;

	style = (style == 1) ? 39 : 7;
	while (size--)
	{
		c = (nb / g_precalculated_uint_32[16][size]) % 16 + '0';
		c = (c > 57) ? c + style : c;
		print_in_buffer(c, 1);
	}
}

void	print_number_hex_uint64_t(uint64_t nb, int size, int style)
{
	char		c;

	style = (style == 1) ? 39 : 7;
	while (size--)
	{
		c = (nb / g_precalculated_uint_64[16][size]) % 16 + '0';
		c = (c > 57) ? c + style : c;
		print_in_buffer(c, 1);
	}
}

void	print_number_hex(t_va_data data, int size, int style, int length)
{
	if (length == 1)
		print_number_hex_uint8_t(data.uint8, size, style);
	else if (length == 2)
		print_number_hex_uint16_t(data.uint16, size, style);
	else if (length == 4)
		print_number_hex_uint32_t(data.uint32, size, style);
	else if (length == 8)
		print_number_hex_uint64_t(data.uint64, size, style);
}

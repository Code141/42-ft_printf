/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:15:29 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/20 17:27:53 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <stdint.h>
#include <precalculated_decimales.h>

void	print_number_uint8_t(uint8_t nb, int size, int base)
{
	char	c;

	while (size--)
	{
		c = nb / g_precalculated_uint_8[base][size] % base + '0';
		print_in_buffer_nb(c, 1);
	}
}

void	print_number_uint16_t(uint16_t nb, int size, int base)
{
	char	c;

	while (size--)
	{
		c = nb / g_precalculated_uint_16[base][size] % base + '0';
		print_in_buffer_nb(c, 1);
	}
}

void	print_number_uint32_t(uint32_t nb, int size, int base)
{
	char	c;

	while (size--)
	{
		c = nb / g_precalculated_uint_32[base][size] % base + '0';
		print_in_buffer_nb(c, 1);
	}
}

void	print_number_uint64_t(uint64_t nb, int size, int base)
{
	char		c;

	while (size--)
	{
		c = nb / g_precalculated_uint_64[base][size] % base + '0';
		print_in_buffer_nb(c, 1);
	}
}

void	print_number(t_va_data data, int size, int base, int length)
{
	if (length == 1)
		print_number_uint8_t(data.uint8, size, base);
	else if (length == 2)
		print_number_uint16_t(data.uint16, size, base);
	else if (length == 4)
		print_number_uint32_t(data.uint32, size, base);
	else if (length == 8)
		print_number_uint64_t(data.uint64, size, base);
}

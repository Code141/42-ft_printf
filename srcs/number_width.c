/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:36:51 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/23 23:19:12 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <stdint.h>

int		number_width_uint8_t(uint8_t nb, int base)
{
	int	size;

	size = 0;
	while (nb)
	{
		nb /= base;
		size++;
	}
	return (size);
}

int		number_width_uint16_t(uint16_t nb, int base)
{
	int	size;

	size = 0;
	while (nb)
	{
		nb /= base;
		size++;
	}
	return (size);
}

int		number_width_uint32_t(uint32_t nb, int base)
{
	int	size;

	size = 0;
	while (nb)
	{
		nb /= base;
		size++;
	}
	return (size);
}

int		number_width_uint64_t(uint64_t nb, int base)
{
	int	size;

	size = 0;
	while (nb)
	{
		nb /= base;
		size++;
	}
	return (size);
}

int		number_width(t_va_data data, int base, int length)
{
	if (length == 1)
		return (number_width_uint8_t(data.uint8, base));
	else if (length == 2)
		return (number_width_uint16_t(data.uint16, base));
	else if (length == 4)
		return (number_width_uint32_t(data.uint32, base));
	else if (length == 8)
		return (number_width_uint64_t(data.uint64, base));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:26:53 by gelambin          #+#    #+#             */
/*   Updated: 2018/08/11 19:14:45 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>
#include <specifiers.h>

extern t_ctx *g_ctx;

void	signed_nb(t_flag *flags)
{
	if (flags->length == 1 && flags->data.int8 < 0)
	{
		flags->data.uint8 = -flags->data.int8;
		flags->neg = 1;
	}
	else if (flags->length == 2 && flags->data.int16 < 0)
	{
		flags->data.uint16 = -flags->data.int16;
		flags->neg = 1;
	}
	else if (flags->length == 4 && flags->data.int32 < 0)
	{
		flags->data.uint32 = -flags->data.int32;
		flags->neg = 1;
	}
	else if (flags->length == 8 && flags->data.int64 < 0)
	{
		flags->data.uint64 = -flags->data.int64;
		flags->neg = 1;
	}
}

int	signed_integer(char specifier, t_flag *flags)
{
	if (specifier == 'd' || specifier == 'i')
		flags->procedure = &spec_d;
	else if (specifier == 'D')
	{
			flags->length = 8;
			flags->procedure = &spec_d;
	}
	else
		return (0);
	flags->data.data = va_arg(g_ctx->current_args, long long);
	signed_nb(flags);
	return (1);
}

int	unsigned_integer(char specifier, t_flag *flags)
{
	if (specifier == 'u')
		flags->procedure = &spec_u;
	else if (specifier == 'U')
	{
		flags->length = 8;
		flags->procedure = &spec_u;
	}
	else if (specifier == 'x' || specifier == 'X')
		flags->procedure = &spec_x;
	else if (specifier == 'o')
		flags->procedure = &spec_o;
	else if (specifier == 'O')
	{
		flags->length = 8;
		flags->procedure = &spec_o;
	}
	else if (specifier == 'p')
		flags->procedure = &spec_p;
	else if (specifier == 'b')
		flags->procedure = &spec_b;
	else
		return (0);
	flags->data.data = va_arg(g_ctx->current_args, long long);
	return (1);
}

int character(char specifier, t_flag *flags)
{
	if (specifier == 'c')
		flags->procedure = &spec_c;
	else if (specifier == 'C')
	{
		flags->length = 4;
		flags->procedure = &spec_c;
	}
	else if (specifier == 's')
	{
		flags->procedure = &spec_s;
		if (flags->length == 8)
			flags->procedure = &spec_S;
	}
	else if (specifier == 'S')
		flags->procedure = &spec_S;
	else
		return (0);
		flags->data.data = va_arg(g_ctx->current_args, long long);
	return (1);
}


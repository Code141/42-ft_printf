/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interceptor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/01 23:32:21 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <s_ctx.h>
#include <flags.h>

#include <specifiers.h>
#include <unistd.h>

extern t_ctx *g_ctx;

void	error(const char *arg, int pos)
{
	//==77134==WARNING: unexpected format specifier in printf interceptor: %-01+
	/*
	   write (1, "WARNING: unexpected format specifier in ft_printf interceptor: "
	   , 63);
	   write (1, arg, pos);
	   write (1, "\n", 1);
	 */
}

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

int		new_arg(const char *arg, int current_arg)
{
	int		pos;
	t_flag	*flags;

	pos = 0;
	flags = g_ctx->flags + current_arg;
	
	flags->procedure = &spec_c;
	flags->precision = -1;

	flags->alternate = 0;
	flags->pad = 0;
	flags->left_align = 0;
	flags->explicite_sign = 0;
	flags->space_for_sign = 0;
	flags->width = 0;
	flags->length = 0;
	flags->data.data = 0;
	flags->neg = 0;

	pos += flag(arg + pos, flags);
	flags->specifier = *(arg + pos);

	if (arg[pos])
	{
		pos++;

		if (specifier(flags->specifier, flags) && flags->specifier != '%')
			flags->data.data = va_arg(g_ctx->current_args, long long);
		else
			flags->data.c = flags->specifier;

/*----------------------------------------------------------------------------*/

		if (!flags->length)
			flags->length = 4;

		if (flags->specifier == 'U' || flags->specifier == 'D'
				|| flags->specifier == 'O')
			flags->length = 8;
		if (flags->specifier == 'C' || flags->specifier == 'S')
			flags->length = 4;
		if (flags->specifier == 'd' || flags->specifier == 'D'
				|| flags->specifier == 'i')
			signed_nb(flags);
		if (flags->specifier == 's' && flags->length == 8)
			flags->procedure = &spec_S;
/*----------------------------------------------------------------------------*/
		flags->procedure(flags);
	}
	flags->jump = pos;
	return (pos);
}


void		interceptor(const char *format)
{
	int		i;
	int		j;
	int		current_arg;

	i = 0;
	j = 0;
	current_arg = 0;
	g_ctx->buff_size = 0;
	while (format[i + j])
		if (format[i + j] == '%')
			i += new_arg(format + i + j, current_arg++);
		else
			write(1, format + i + j++, 1);
	g_ctx->buff_size += j;
}

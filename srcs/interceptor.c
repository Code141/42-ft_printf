/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interceptor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/20 17:59:54 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <s_ctx.h>
#include <flags.h>

#include <specifiers.h>
#include <unistd.h>

/*
void	error(const char *arg, int pos)
{
	//==77134==WARNING: unexpected format specifier in printf interceptor: %-01+
	write (1,
	"WARNING: unexpected format specifier in ft_printf interceptor: ", 63);
	write (1, arg, pos);
	write (1, "\n", 1);
}
*/

int		new_arg(const char *arg, int current_arg)
{
	int		pos;
	t_flag	flags;

	pos = 0;

	flags.procedure = NULL;
	flags.precision = -1;

	flags.alternate = 0;
	flags.pad = 0;
	flags.left_align = 0;
	flags.explicite_sign = 0;
	flags.space_for_sign = 0;
	flags.width = 0;
	flags.length = 0;
	flags.data.data = 0;
	flags.neg = 0;

	pos += flag(arg + pos, &flags);

	flags.specifier = arg[pos];

	if (!flags.length)
		flags.length = 4;

	if (arg[pos])
	{
		pos++;
		if (!specifier(flags.specifier, &flags))
		{
			flags.procedure = &spec_c;
			flags.data.c = flags.specifier;
		}
		flags.procedure(&flags);
	}
	return (pos);
}

void		interceptor(const char *format)
{
	int		i;
	int		current_arg;

	i = 0;
	current_arg = 0;
	while (format[i])
		if (format[i] == '%')
			i += new_arg(format + i, current_arg++);
		else
			print_in_buffer_nb(format[i++], 1);
}

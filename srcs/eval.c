/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/12 20:38:24 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <flags.h>

//==77134==WARNING: unexpected format specifier in printf interceptor: %-01+

#include <unistd.h>

void	error()
{
	write (1, "ERROR\n", 6);
}

int		new_arg(const char *str_arg, t_printf_flags	*flags)
{
	int				pos;

	pos = 0;
	if (!flag(str_arg, &pos, flags))
		error();
	if (!width_precision(str_arg, &pos, flags))
		error();
	if (!length(str_arg, &pos, flags))
		error();
	if (!specifier(str_arg, &pos, flags))
		error();
	return (pos);
}

int		count_arg(const char *text)
{
	int	i;
	int	nb_arg;

	i = 0;
	nb_arg = 0;
	while (text[i])
	{
		if (text[i] == '%' && text[i + 1] != '%')
			nb_arg++;
		if (text[i] == '%' && text[i + 1] == '%')
			i++;
		i++;
	}
	return (nb_arg);
}

int		get_buff_size(const char *text, va_list *va_args)
{
	int				i;
	int				nb_arg;
	int				current_arg;
	t_printf_flags	*flags;

	i = 0;
	size = 0;
	current_arg = 0;
	nb_arg = count_arg(text);
	flags = (t_printf_flags*)malloc(sizeof(t_printf_flags) * nb_arg);
	if (!flags)
		exit (0); // MALLOC
	while (text[i])
	{
		if (text[i] == '%')
			i += new_arg(text + i, &(flags + current_arg++));
		else
			size++;
		i++;
	}
	return (size);
}

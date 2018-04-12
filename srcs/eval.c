/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/11 18:26:30 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <u_arg.h>

int		new_arg(const char *str_arg)
{
	t_printf_arg	arg;
	int				jump;

	jump = 0;
	jump = flags(str_arg, &arg.flags);
	if (jump < 0)
		error();
	str_arg += jump;
	jump = 0;
	
/*
	width(str_arg + jump, &i, &size, args);
	precision(str_arg + jump, &i, &size, args);
	length(str_arg + jump, &i, &size, args);
	specifier(str_arg + jump, &i, &size, args);
*/
	return (1);
}

int		get_buff_size(const char *text, va_list *va_args)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (text[i])
	{
		if (text[i] == '%')
		{
			i++;
			new_arg(text + i);
		}
		else
		{
			i++;
			size++;
		}
	}
	return (size);
}

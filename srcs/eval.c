/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:31:05 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/08 14:38:50 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	get_arg_size(const char *str, int *i, va_list *arg)
{
	char	*s;

	*i = (*i)++;
	if (str[*i] == 's')
	{
			s = va_arg(*arg, char *);
			return (5);
	}
	return (0);
}

int	get_buff_size(const char *str, va_list *arg)
{
	int	i;
	int	size;

	i = 0;
	if (str[0] == '%')
	{
		size += get_arg_size(str, &i, arg);
	}
	else
	{
		i++;
		size++;
	}
	while (str[i])
	{
		if (str[i] == '%' && str[i - 1] != '\\')
		{
			size += get_arg_size(str, &i, arg);
		}
		size++;
		i++;
	}
	return (size);
}

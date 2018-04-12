/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:44:31 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/11 18:25:36 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <flags.h>

int	flags(const char *str, t_printf_flags *flags)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
			flags->alternate = 1;
		else if (str[i] == '0')
			while (str[i] >= '0' && str[i] <= '9')
					flags->pad *= 10 + str[i++] - '0';
		else if (str[i] == '-')
			flags->left_align = 1;
		else if (str[i] == '+')
			flags->explicite_sign = 1;
		else if (str[i] == ' ')
			flags->space_for_signe = 1;
		else if (str[i] == '\'')
			flags->grouping_thousands = 1;
		else
			return (i);
		i++;
	}
	return (i);
}

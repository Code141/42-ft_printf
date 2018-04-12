/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:47:46 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/11 18:17:42 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Think to the possibility to read next arg for get an int precision
// * for next argument
// *3$ for 3em argument

int	precision(const char *str, int *precision)
{
	int	i;

	i = 0;
	if (str[i] == '.')
		while (str[i] >= '0' && str[i] <= '9')
			*width *= 10 + str[i++] - '0';
	return (i);
}

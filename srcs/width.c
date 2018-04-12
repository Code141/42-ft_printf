/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:52:52 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/11 18:17:53 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Think to the possibility to read next arg for get an int width
// * for next argument
// *3$ for 3em argument

int	width(const char *str, int *width)
{
	int	i;

	i = 0;
	if (str[i] != 0)
		while (str[i] >= '0' && str[i] <= '9')
			*width *= 10 + str[i++] - '0';
	return (i);
}


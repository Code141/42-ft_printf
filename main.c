/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:38:04 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/16 20:01:06 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ft_printf.h>

int	main(void)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 42;
	j = 84;
	str = "world";
	printf("	: [%d] Std", printf("Hello"));
	printf("\n");
	printf("	: [%d] Std", printf("|%d", k));
	printf("\n");
	printf("	: [%d] Std", printf(""));
	printf("\n\n\n%d", i);
	ft_printf("", i, j, k, str);
	ft_printf("");
	char c;
	c = 'x';
//	foo("c", c);
	return (0);
}

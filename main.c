/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:38:04 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/01 00:32:38 by gelambin         ###   ########.fr       */
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

	i = 123456;
	j = 20;
	k = 30;
	str = "world";
	ft_printf("|%-4d|\n", i);
	ft_printf("%d", i, j);
/*
	printf("	: [%d] Std", printf("Hello"));
	printf("\n");
	printf("	: [%d] Std", printf("|%d", k));
	printf("\n");
	printf("|%2$10d|\n", i, j, k, str);
	printf("|%02d|\n", i, j, k, str);
	printf("|%2$010d|\n", i, j, k, str);
	printf("|%3$d-%d-%d|\n", i, j, k, str);
	printf("|%03$10d|\n", i, j, k);
	printf("|%+10d|\n", i, j, k);
	printf("|%#1$0d|\n", i, j, k);
	printf("|%10#d|\n", i, j, k);
	printf("|%#0+0-d|\n", i, j, k);
	printf("|%100hd|\n", i, j, k);
	printf("|%02$*d|\n", i, j, k);
	printf("-|%.11d-%d-%d|\n", i, j, k, str);
	printf("|%d-%d-%d-%1$*d-%d-%d|\n", i, j, k, str);
*/
	char c;
	c = 'x';
//	foo("c", c);
	return (0);
}

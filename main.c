/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:38:04 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/10 15:56:17 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ft_printf.h>

int	main(void)
{
	char	*str;
	char	*str2;
	int		i;
	int		j;
	int		k;

	i = 5;
	j = 10;
	k = 20;
	str = "|Hello world|";
	str2 = "Salut bebe";


	printf("%500*d\n---------------\n", i, j, k);

	ft_printf("%50s\n", str);
	ft_printf("%50.5s\n", str);
	printf("%50s\n", str);
	printf("%50.5s\n", str);



	ft_printf("%+10.5d\n", 123);
	ft_printf("%- 10.5d\n", 123);
	ft_printf("% 10.5d\n", 123);
	ft_printf("%+10.5d\n", -123);
	ft_printf("%-10.5d\n", -123);
	ft_printf("% 10.5d\n", -123);
	ft_printf("% 10.0d\n", 0);
	ft_printf("%0+10.0d\n", 0);
	ft_printf("%0+10.0d\n", 123);
	ft_printf("%0+10.5d\n", -123);
	ft_printf("%0+5d\n--------\n", -42);
	ft_printf("%05d\n", 42);
	ft_printf("%0+5d\n", 42);
	ft_printf("%05d\n", -42);
	ft_printf("%0+5d\n", -42);

	printf("\n\n", 123);
	printf("%+10.5d\n", 123);
	printf("%- 10.5d\n", 123);
	printf("% 10.5d\n", 123);
	printf("%+10.5d\n", -123);
	printf("%-10.5d\n", -123);
	printf("% 10.5d\n", -123);
	printf("% 10.0d\n", 0);
	printf("%0+10.0d\n", 0);
	printf("%0+10.0d\n", 123);
	printf("%0+10.5d\n", -123);
	printf("%0+5d\n--------\n", -42);
	printf("%05d\n", 42);
	printf("%0+5d\n", 42);
	printf("%05d\n", -42);
	printf("%0+5d\n", -42);


	//	ft_printf("%d", i, j);
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
//	while (1);
	return (0);
}

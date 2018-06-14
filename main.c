/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:38:04 by gelambin          #+#    #+#             */
/*   Updated: 2018/06/13 23:37:48 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <wchar.h>
#include <stdlib.h>
#include <locale.h>

#include <stdio.h>
#include <ft_printf.h>
#include <stdint.h>
#include <stddef.h>
#include <limits.h>

int	main(void)
{
	char	*str;
	char	*str2;
	int		i;
	int		j;
	int		k;
	unsigned long long	l;
	i = 5;
	j = 10;
	k = 20;
	l = -21474836471224;
	str = "|Hello world|";
	str2 = "Salut";



	setlocale(LC_ALL,"");

	wchar_t myChar1 = L'\x2126';
	wchar_t myChar2 = 0x2126;  // hexadecimal encoding of char Ω using UTF-16
	wchar_t myChar3 = 0xC3B6;  // hexadecimal encoding of char Ω using UTF-16
	//	01000110 11000011 10111000 11000011 10110110




	   printf("[%d]\n", ft_printf("%.32b", myChar3));
	   printf("[%d]\n", printf("%C", myChar3));
	ft_printf("[%d]\n", ft_printf("%C", myChar3));

	   printf("[%d]\n", ft_printf("%.32b", myChar2));
	   printf("[%d]\n", printf("%C", myChar2));
	ft_printf("[%d]\n", ft_printf("%C", myChar2));


/*

	//	WEIRD TEST
	   printf(" {%d-%*3$d--%d\n", 40, 10, 5, 100);
	ft_printf("-{%d-%*3$d--%d\n", 40, 10, 5, 100);

	   printf("|%#2$d\n", 3, 10, 2, 4);
	   ft_printf("-|%#2$d\n", 3, 10, 2, 4);

	   printf("%-*$20#mm\n", 3, 10, 2, 4);
	   ft_printf("-%-*$20#mm\n", 3, 10, 2, 4);
*/

/*
	   printf("%.*5d\n", 20, 10);
	   ft_printf("%.*5d\n", 20, 10);


	   printf("%*.*d\n", 20, 10, 3);
	   ft_printf("%*.*d\n", 20, 10, 3);

	   printf("%.5*d\n", 20, 10);
	   ft_printf("%.5*d\n", 20, 10);

	   printf("~%*d\n", -10, 10);
	   ft_printf("~--%*d\n", -10, 10);

	   printf("{%.*d}\n", -5, 42);
	   ft_printf("--{%.*d}\n", -5, 42);

	   printf("[%.*s]\n", -5, "42");
	   ft_printf("--[%.*s]\n", -5, "42");

	   printf("[[%.*d]\n", -10, 0);
	   ft_printf("--[[%.*d]\n", -10, 0);
	   printf("\n---------------------------------------------------\n");
	   printf("{TOTO%05.*d}\n", -15, 42);
	   ft_printf("--{TOTO%05.*d}\n", -15, 42);

*/

	/*	
		printf("%d", printf("%.5s\n", str));

		ft_printf("XXXXXXXXXXXX");
		ft_printf("%50s\n", str);
		ft_printf("%50.5s\n", str);
	//	printf("%50s\n", str);
	//	printf("%50.5s\n", str);

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

	ft_printf("{%lhlz}", 9223372036854775807);
	printf("\n-------------------------------------------------------------\n");
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

*/
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

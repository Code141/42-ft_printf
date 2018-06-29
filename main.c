/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:38:04 by gelambin          #+#    #+#             */
/*   Updated: 2018/06/29 22:44:15 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
	setlocale(LC_ALL,"");
	char	*str;
	char	*str2;
	long int		i;
	int		j;
	int		k;
	unsigned long long	l;
	i = 5;
	j = 10;
	k = 20;
	l = -21474836471224;
	str = "|Hello world|";
	str2 = "Salut";



/*
ft_printf("[%d]\n", ft_printf("%S", L"Á"));
ft_printf("[%d]\n", printf("%S", L"Á"));
*/
/*
printf("%lc, %lc", L'ÊM-^ZM-^V', L'ÿ≠');
ft_printf("%lc, %lc", L'ÊM-^ZM-^V', L'ÿ≠');
*/

/*
ft_printf("[%d]\n", printf("%S", L"Á±≥"));
ft_printf("[%d]\n", ft_printf("%S", L"Á±≥"));
*/
/*
ft_printf("[%d]\n", printf("\n%.1S\n", L"ÊÊuM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.2S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.3S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.4S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.5S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.6S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.7S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.8S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.9S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.10S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.11S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.12S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.13S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
//ft_printf("[%d]\n", ft_printf("\n[%.4S]\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B"));
printf("---------------------------\n");
ft_printf("[%d]\n", printf("%c", 200));
ft_printf("[%d]\n", ft_printf("%c", 200));
printf("---------------------------\n");
*/

printf("[%d])\n", printf("({%60S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B"));
printf("[%d]", ft_printf("{%60S}\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B"));

/*
	wchar_t myChar2 = 0x03a9;

//	wchar_t myChar2 = 0xe188b4;
//	wchar_t myChar2 = 0xEFA3BF;
//	wchar_t myChar2 = 0xF0908D88;
//	wchar_t myChar3 = 0xC3B6;

	printf("%lc\n", (wint_t)536);
	ft_printf("{%C}\n", (wint_t)536);

	printf("[%d]\n", printf("-%C", myChar2));
	ft_printf("[%d]\n", ft_printf("%C", myChar2));

ft_printf("11110000\n10101011\n10011101\n10000110\n--------\n");
ft_printf("[%d]\n", ft_printf("%C", L'𫝆'));
ft_printf("[%d]\n", printf("%C", 'c'));
ft_printf("[%d]\n", ft_printf("%C", 'c'));


ft_printf("[%d]\n", printf("%C", L'ÁM-^L´'));
ft_printf("[%d]\n", ft_printf("%C", L'ÁM-^L´'));

ft_printf("\n----------------------------------\n", 'X');



ft_printf("11100000\n10101111\n10110011\n-----------------\n");

ft_printf("%C", L'௳');


ft_printf("\n----------------------------------\n", 'X');
ft_printf("%C", 'X');

ft_printf("\n----------------------------------\n", 'X');
printf("%c", 200);
ft_printf("%c", 200);
*/




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
	//	while (1);
	return (0);
}

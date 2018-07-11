/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:38:04 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/10 18:49:05 by gelambin         ###   ########.fr       */
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


	char				*str;
	char				*str2;
	long int			i;
	int					j;
	int					k;
	unsigned long long	l;

	i = 5;
	j = 10;
	k = 20;
	l = -21474836471224;
	str = "|Hello world|";
	str2 = "Salut";

//	setlocale(LC_ALL,"");

/*
ft_printf("\n[%d]\n", printf());
printf("\n[%d]\n", ft_printf());
*/

int			base;
long long	pow;

base = 16;
i = 25;
pow = 1;

while (i--)
{
	pow = pow * 16;
	ft_printf("%70ld - ", pow);
	ft_printf("%70lx - ", pow);
	ft_printf("  [%d]",ft_printf("%lb", pow));
	ft_printf("\n");
}

printf("-%lx\n\n", 4294967296);
ft_printf("%lx", 4294967296);
while (1);
/*
ft_printf("%5%");
ft_printf("\n[%d]\n", printf("%5%"));
printf("\n[%d]\n", ft_printf("%5%"));
*/

/*
ft_printf("\n[%d]\n", printf("\n%+-12.7dt%0 4i %% et %lc titi\n", 125, 124, 256));
printf("\n[%d]\n", ft_printf("\n%+-12.7dt%0 4i %% et %lc titi\n", 125, 124, 256));
*/


/*
ft_printf("[%d]\n", ft_printf("%S", L"Á"));
ft_printf("[%d]\n", printf("%S", L"Á"));


printf("%lc, %lc", L'ÊM-^ZM-^V', L'ÿ≠');
ft_printf("%lc, %lc", L'ÊM-^ZM-^V', L'ÿ≠');



ft_printf("[%d]\n", printf("%S", L"Á±≥"));
ft_printf("[%d]\n", ft_printf("%S", L"Á±≥"));


ft_printf("[%d]\n", printf("\n%.1S\n", L"ÊÊuM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.2S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.3S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.4S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printntf is inf times slower thanf("[%d]\n", printf("\n%.5S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.6S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.7S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.8S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.9S\n", L"ÊÊÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.10S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.11S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.12S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", printf("\n%.13S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B") - 2);
ft_printf("[%d]\n", ft_printf("\n[%.4S]\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B"));
printf("---------------------------\n");
ft_printf("[%d]\n", printf("%c", 200));
ft_printf("[%d]\n", ft_printf("%c", 200));
printf("---------------------------\n");


printf("[%d]))\n", printf("%15.9S", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B"));
printf("[%d]\n", ft_printf("%15.9S", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B"));

printf("[%d]\n", printf("%3.2S", L"Jambon"));
printf("[%d]\n", ft_printf("%3.2S", L"Jambon"));


	wchar_t myChar2 = 0x03a9;
	wchar_t myChar3 = 0xC3B6;
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
ft_printf("\n----------------------------------\n", 'X');
ft_printf("%c", 200);
ft_printf("\n----------------------------------\n", 'X');


*/
	//	WEIRD TEST          WARNING MAKE INFINITE WHILE 
/*
	   printf(" {%d-%*3$d--%d\n", 40, 10, 5, 100);

	ft_printf("-{%d-%*3$d--%d\n", 40, 10, 5, 100);
	rintf("|%#2$d\n", 3, 10, 2, 4);
	t_printf("-|%#2$d\n", 3, 10, 2, 4);
	rintf("%-*$20#mm\n", 3, 10, 2, 4);
	t_printf("-%-*$20#mm\n", 3, 10, 2, 4);
	rintf("%.*5d\n", 20, 10);
	t_printf("%.*5d\n", 20, 10);
*/

/*

	rintf("%*.*d\n", 20, 10, 3);
	t_printf("%*.*d\n", 20, 10, 3);

	rintf("%.5*d\n", 20, 10);
	t_printf("%.5*d\n", 20, 10);

	rintf("~%*d\n", -10, 10);
	t_printf("~--%*d\n", -10, 10);

	rintf("{%.*d}\n", -5, 42);
	t_printf("--{%.*d}\n", -5, 42);

	rintf("[%.*s]\n", -5, "42");
	t_printf("--[%.*s]\n", -5, "42");

	rintf("[[%.*d]\n", -10, 0);
	t_printf("--[[%.*d]\n", -10, 0);
	rintf("\n---------------------------------------------------\n");
	rintf("{TOTO%05.*d}\n", -15, 42);
	t_printf("--{TOTO%05.*d}\n", -15, 42);


	printf("%d", printf("%.5s\n", str));

	ft_printf("XXXXXXXXXXXX");
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

	ft_printf("%d", i, j);
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
	return (0);
}

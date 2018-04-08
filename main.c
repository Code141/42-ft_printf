/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:38:04 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/08 14:40:24 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ft_printf.h>

int	main(void)
{
	char *str;

	str = "world";
	printf("	: [%d] Std", printf("Hello"));
	printf("\n");
	printf("	: [%d] Lft", ft_printf("Hello %s !", str));
	printf("\n\n");

	char c;
	c = 'x';
//	foo("c", c);
	return (0);
}

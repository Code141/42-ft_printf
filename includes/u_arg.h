/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_arg.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 11:38:57 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/05 12:03:31 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef U_ARG_H
# define U_ARG_H

typedef union	u_va_data
{
	unsigned char	c;
	char			*s;
	int				d;
	unsigned int	u;
	unsigned int	x; // hex
	unsigned int	X; // HEX
	
}				t_va_data;

typedef struct	s_va_arg
{
	char		flag;
	char		min_field_width;
	char		precision;
	char		length;
	char		conversion;
	t_va_type	data;
}				t_va_arg;


#endif

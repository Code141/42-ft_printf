/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_printf_flags.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 16:34:37 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/12 16:43:57 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_PRINTF_FLAGS_H
# define  S_PRINTF_FLAGS_H

typedef union	u_va_data
{
	unsigned char	c;
	int				d;
	unsigned int	u;
	unsigned int	x;
	unsigned int	X;
	double			e;
	double			E;
	double			f;
	char			*s;
	void			*p;
}				t_va_data;

enum			e_specifier
{
	e_specifier_c,
	e_specifier_d,
	e_specifier_u,
	e_specifier_x,
	e_specifier_X,
	e_specifier_e,
	e_specifier_E,
	e_specifier_f,
	e_specifier_g,
	e_specifier_G,
	e_specifier_s,
	e_specifier_p,
	e_specifier_percent
};

enum			e_length
{
	e_length_hh,
	e_length_h,
	e_length_ll,
	e_length_l,
	e_length_j,
	e_length_z
};

typedef struct	s_printf_flags
{
	char	alternate;
	char	pad;
	char	left_align;
	char	explicite_sign;
	char	space_for_signe;
	char	grouping_thousands;
	int		width;
	int		length;
	int		precision;
}				t_printf_flags;

#endif

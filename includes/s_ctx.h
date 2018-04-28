/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ctx.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 17:04:53 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/27 17:40:23 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_CTX_H
# define S_CTX_H
# include <stdarg.h>

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

typedef enum	e_specifier
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
}				t_specifier;

typedef enum	e_length
{
	e_length_hh,
	e_length_h,
	e_length_ll,
	e_length_l,
	e_length_j,
	e_length_z
}				t_length; 

typedef struct	s_flag
{
	char		parameter;
	char		alternate;
	char		pad;
	char		left_align;
	char		explicite_sign;
	char		space_for_signe;
	char		grouping_thousands;
	int			width;
	int			precision;
	t_length	length;
	t_specifier	specifier;
}				t_flag;

typedef struct	s_ctx
{
	va_list		*args;
	char		*text;
	char		*buff;
	t_flag		*flags;
	int			buff_i;
	int			buff_size;
}				t_ctx;

#endif

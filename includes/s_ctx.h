/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ctx.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 17:04:53 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/04 18:45:52 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_CTX_H
# define S_CTX_H
# include <stdarg.h>

typedef struct	s_ctx	t_ctx;
typedef struct	s_flag	t_flag;

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

typedef enum	e_length
{
	e_length_hh,
	e_length_h,
	e_length_ll,
	e_length_l,
	e_length_j,
	e_length_z
}				t_length;

struct			s_flag
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
	void		(*specifier)(t_ctx *ctx);
};

struct			s_ctx
{
	va_list		*args;
	char		*text;
	char		*buff;
	int			buff_i;
	int			buff_size;
	t_flag		flags[];
};

#endif

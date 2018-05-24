/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ctx.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 17:04:53 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/24 14:51:43 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_CTX_H
# define S_CTX_H
# include <stdarg.h>
# include <stdint.h>

typedef struct	s_ctx	t_ctx;
typedef struct	s_flag	t_flag;

typedef union	u_va_data
{
	char	c;
	int				d;
	int				o;
	unsigned int	u;
	unsigned int	x;
	unsigned int	X;
	double			e;
	double			E;
	double			f;
	char			*s;
	void			*p;
	long long		data;
	int8_t			int8;
	int16_t			int16;
	int32_t			int32;
	int64_t			int64;
	uint8_t			uint8;
	uint16_t		uint16;
	uint32_t		uint32;
	uint64_t		uint64;
}				t_va_data;

typedef enum	e_length
{
	e_length_hh = 1,
	e_length_h = 2,
	e_length_ll = 8,
	e_length_l = 8,
	e_length_j = 8,
	e_length_z = 8
}				t_length;


struct			s_flag
{
	char		specifier;
	int			jump;
	char		alternate;
	char		pad;
	char		left_align;
	char		explicite_sign;
	char		space_for_sign;
	char		grouping_thousands;
	int			width;
	int			precision;
	t_length	length;
	t_va_data	data;
	char		neg;
	void		(*procedure)(t_ctx *ctx, t_flag *flags);
};

struct			s_ctx
{
	va_list		args;
	va_list		current_args;
	char		*format;
	int			buff_size;
	t_flag		flags[];
};

#endif

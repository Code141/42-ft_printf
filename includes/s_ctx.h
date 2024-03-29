/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ctx.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 17:04:53 by gelambin          #+#    #+#             */
/*   Updated: 2018/12/20 20:23:11 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_CTX_H
# define S_CTX_H
# include <ft_printf.h>
# include <stdarg.h>
# include <stdint.h>
# include <wchar.h>

typedef struct s_ctx	t_ctx;
typedef struct s_flag	t_flag;

extern			t_ctx	g_ctx;

typedef union	u_va_data
{
	long long		data;
	int8_t			int8;
	int16_t			int16;
	int32_t			int32;
	int64_t			int64;
	uint8_t			uint8;
	uint16_t		uint16;
	uint32_t		uint32;
	uint64_t		uint64;

	char			c;
	wchar_t			wc;
	char			wcc[4];
	char			*s;
	void			*p;
	
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
	t_va_data	data;
	char		specifier;
	char		alternate;
	char		pad;
	char		left_align;
	char		explicite_sign;
	char		space_for_sign;
	char		neg;
	int			width;
	int			precision;
	int			jump;
	t_length	length;
	void		(*procedure)(t_flag *flags);
};

struct			s_ctx
{
	char		buffer[FT_PRINTF_BUFF_SIZE];
	int			buff_pos;
	int			buff_size;
	va_list		args;
	va_list		current_args;
};

#endif

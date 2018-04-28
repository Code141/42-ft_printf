/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:44:31 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/27 17:33:30 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <s_ctx.h>

void	argument_access(const char *str, int *pos, t_ctx *ctx)
{
	int	nb;
	int	i;

	i = *pos;
	nb = 0;
	if (str[i] == '0')
		ctx->flags.pad = 1;

	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + str[i++] - '0';

	if (str[i] == '$')
	{
		ctx->flags.parameter = nb;
		i++;
	}
	else
		ctx->flags.width = nb;
	*pos = i;
}

int	flag(const char *str, int *pos, t_ctx *ctx)
{
	int	i;

	i = *pos;
	while (str[i])
	{
		if (str[i] == '#')
			ctx->flags.alternate = 1;
		else if (str[i] == '0')
			ctx->flags.pad = 1;
		else if (str[i] == '-')
			ctx->flags.left_align = 1;
		else if (str[i] == '+')
			ctx->flags.explicite_sign = 1;
		else if (str[i] == ' ')
			ctx->flags.space_for_signe = 1;
		else if (str[i] == '\'')
			ctx->flags.grouping_thousands = 1;
		else
			return (1);
		i++;
		(*pos)++;
	}
	return (0);
}

int		width_precision(const char *str, t_ctx *ctx)
{
	int	i;

	ctx->flags.precision = 1; // DEFAULT BEHAVIOR
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		ctx->flags.width = (ctx->flags.width * 10) + str[i++] - '0';

	if (str[i] == '.')
		i++;

	// * for next argument

	while (str[i] >= '0' && str[i] <= '9')
		ctx->flags.precision = (ctx->flags.precision * 10) + str[i++] - '0';
	return (1);
}

//---------

int		length(const char *str, t_ctx *ctx)
{
	if (*str == 'h' && *(str + 1) == 'h')
		ctx->flags.length = e_length_hh;
	else if (*str == 'l' && *(str + 1) == 'l')
		ctx->flags.length = e_length_ll;
	if (ctx->flags.length)
		return (2);
	if (*str == 'h')
		ctx->flags.length = e_length_h;
	else if (*str == 'l')
		ctx->flags.length = e_length_l;
	else if (*str == 'j')
		ctx->flags.length = e_length_j;
	else if (*str == 'z')
		ctx->flags.length = e_length_z;
	if (ctx->flags.length)
		return (1);
	return (0);
}

int		specifier(const char *str, t_ctx *ctx)
{
	if (*str == 'c')
		ctx->flags.specifier = e_specifier_c;
	else if (*str == 'd')
		ctx->flags.specifier = e_specifier_d;
	else if (*str == 'u')
		ctx->flags.specifier = e_specifier_u;
	else if (*str == 'x')
		ctx->flags.specifier = e_specifier_x;
	else if (*str == 'X')
		ctx->flags.specifier = e_specifier_X;
	else if (*str == 'e')
		ctx->flags.specifier = e_specifier_e;
	else if (*str == 'E')
		ctx->flags.specifier = e_specifier_E;
	else if (*str == 'f')
		ctx->flags.specifier = e_specifier_f;
	else if (*str == 'g')
		ctx->flags.specifier = e_specifier_g;
	else if (*str == 'G')
		ctx->flags.specifier = e_specifier_G;
	else if (*str == 's')
		ctx->flags.specifier = e_specifier_s;
	else if (*str == 'p')
		ctx->flags.specifier = e_specifier_p;
	else if (*str == '%')
		ctx->flags.specifier = e_specifier_percent;
	else
		return (-1); // UNKNOW SPECIFIER
	return (1);
}

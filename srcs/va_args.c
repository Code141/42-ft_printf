/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 17:02:07 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/07 19:35:36 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <s_ctx.h>

void	pos_arg(t_ctx *ctx, int nb)
{
//	va_end(ctx->current_args);							???
	va_copy(ctx->current_args, ctx->args);
	while (nb-- > 1)
		va_arg(ctx->current_args, void*);
}

void	get_arg(t_flag *flags, t_ctx *ctx)
{
	flags->data.data = (long long)va_arg(ctx->current_args, long long);
}

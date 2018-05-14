/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:11:07 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 03:19:17 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECIFIERS_H
# define SPECIFIERS_H

void	spec_c(t_ctx *ctx, t_flag *flags);
void	spec_d(t_ctx *ctx, t_flag *flags);
void	spec_u(t_ctx *ctx, t_flag *flags);
void	spec_o(t_ctx *ctx, t_flag *flags);
void	spec_x(t_ctx *ctx, t_flag *flags);
void	spec_X(t_ctx *ctx, t_flag *flags);
void	spec_e(t_ctx *ctx, t_flag *flags);
void	spec_E(t_ctx *ctx, t_flag *flags);
void	spec_f(t_ctx *ctx, t_flag *flags);
void	spec_g(t_ctx *ctx, t_flag *flags);
void	spec_s(t_ctx *ctx, t_flag *flags);
void	spec_p(t_ctx *ctx, t_flag *flags);
void	spec_percent(t_ctx *ctx, t_flag *flags);

#endif

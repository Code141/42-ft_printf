/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctx.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:45:13 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/27 16:17:53 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ctx_H
# define ctx_H

void	argument_access(const char *str, int *pos, t_ctx *ctx);
int		flag(const char *str, int *pos, t_ctx *ctx);
int		width_precision(const char *str, t_ctx *ctx);
int		length(const char *str, t_ctx *ctx);
int		specifier(const char *str, int *pos, t_ctx *ctx);

#endif

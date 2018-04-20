/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interceptor.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 00:30:04 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/20 13:34:28 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERCEPTOR_H
# define INTERCEPTOR_H
# include <s_ctx.h>

int	get_arg_size(const char *str, int *i);
int	interceptor(t_ctx *ctx);

#endif

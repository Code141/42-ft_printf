/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctx.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:45:13 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/30 12:24:57 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ctx_H
# define ctx_H

void	argument_access(const char *str, int *pos, t_flag *flag);
int		flag(const char *str, int *pos, t_flag *flag);
int		width_precision(const char *str, t_flag *flag);
int		length(const char *str, t_flag *flag);
int		specifier(const char *str, int *pos, t_flag *flag);

#endif

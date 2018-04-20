/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:45:13 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/20 23:50:40 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H

void	argument_access(const char *str, int *pos, t_flag *flags);
int		flag(const char *str, int *pos, t_flag *flags);
int		width_precision(const char *str, int *pos, t_flag *flags);
int		length(const char *str, t_flag *flags);
int		specifier(const char *str, int *pos, t_flag *flags);

#endif

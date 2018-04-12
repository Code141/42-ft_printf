/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:45:13 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/12 19:33:35 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H
# include <s_printf_flags.h>

int	flag(const char *str, int *pos, t_printf_flags *flags);
int	width_precision(const char *str, int *pos, t_printf_flags *flags);
int	length(const char *str, int *pos, t_printf_flags *flags);
int	specifier(const char *str, int *pos, t_printf_flags *flags);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 00:30:04 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/05 20:06:45 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
# define EVAL_H
# include <stdarg.h>

int	get_arg_size(const char *str, int *i);
int	get_buff_size(const char *str, va_list *arg);

#endif

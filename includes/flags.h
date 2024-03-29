/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:45:13 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/01 23:18:30 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H

int		argument_access(char *str, t_flag *flag);
int		flag(char *str, t_flag *flag);
int		width_precision(char *str, t_flag *flag);
int		length(char *str, t_flag *flag);
int		specifier(char specifier, t_flag *flag);

#endif

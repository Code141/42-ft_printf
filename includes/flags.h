/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:45:13 by gelambin          #+#    #+#             */
/*   Updated: 2018/04/11 17:46:50 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H

typedef struct	s_printf_flags
{
	char	alternate;
	char	pad;
	char	left_align;
	char	explicite_sign;
	char	space_for_signe;
	char	grouping_thousands;
}				t_printf_flags;

#endif

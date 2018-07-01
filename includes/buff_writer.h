/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_writer.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 17:19:40 by gelambin          #+#    #+#             */
/*   Updated: 2018/07/01 23:41:04 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFF_WRITER_H
# define BUFF_WRITER_H
# include <s_ctx.h>

void	print_in_buffer(char c, int nb);
void	sign(char neg, char explicite, char space);
void	alternate(char style);

#endif

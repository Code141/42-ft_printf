/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_writer.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 17:19:40 by gelambin          #+#    #+#             */
/*   Updated: 2018/05/14 17:26:40 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFF_WRITER_H
# define BUFF_WRITER_H
# include <s_ctx.h>

void	print_in_buffer(char c, int nb, t_ctx *ctx);
void	sign(char neg, char explicite, char space, t_ctx *ctx);
void	alternate(char style, t_ctx *ctx);

#endif

#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2018/04/04 15:30:23 by gelambin          #+#    #+#             *#
#*   Updated: 2019/01/22 12:40:07 by gelambin         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

# DEPENDENCIES .H FILES
# Maybe commande or keyword MD to dress dependencies list

NAME		=	libftprintf.a

SRCSPATH	=	srcs

CC			=	gcc

CFLAGS		= -Wconversion
				#-Wall -Wextra -Werror						\
				-std=c89 -pedantic							\
				-Wmissing-prototypes -Wstrict-prototypes	\
				-Wold-style-definition

CPPFLAGS	=	-I./includes/

%.o: %.c includes/
	$(CC) -O3 $(CPPFLAGS) $(CFLAGS) -c -o $@ $<
#	$(CC) -g $(CPPFLAGS) $(CFLAGS) -c -o $@ $<


SRCS		=	ft_printf.c									\
				precalculated_decimales.c					\
				interceptor.c								\
				flags.c										\
				number_width.c								\
				print_number.c								\
				print_number_hex.c							\
				buff_writer.c								\
				integer.c									\
				specifiers/spec_c.c							\
				specifiers/spec_d.c							\
				specifiers/spec_u.c							\
				specifiers/spec_o.c							\
				specifiers/spec_b.c							\
				specifiers/spec_s.c							\
				specifiers/spec_p.c							\
				specifiers/spec_x.c							\
				specifiers/spec_f.c							\
				specifiers/spec_percent.c

OBJS		=	$(addprefix $(SRCSPATH)/, $(SRCS:.c=.o))

all			:	$(NAME)	a.out

$(NAME)		:	$(OBJS)
	ar rc $(NAME) $?

clean		:
	rm -f $(OBJS)

fclean		:	clean
	rm -f $(NAME) $(OBJS)

re			:
	$(MAKE) $(MFLAGS) fclean
	$(MAKE) $(MFLAGS) all

.PHONY		:	all clean fclean re

################################################################################

a.out		:	main.c $(OBJS)
	$(CC) -I./includes -L./ -lftprintf main.c -o a.out

g			:	$(OBJS)
	$(CC) -g $(OBJS) -o $(NAME)

fsanitize	:	$(OBJS)
	$(CC) -g -fsanitize=address $(OBJS) -o $(NAME)

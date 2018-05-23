#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2018/04/04 15:30:23 by gelambin          #+#    #+#             *#
#*   Updated: 2018/05/23 16:37:29 by gelambin         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME		=	libftprintf.a

SRCSPATH	=	srcs

CC			=	gcc

CFLAGS		=	#-Wall -Wextra -Werror						\
				-std=c89 -pedantic							\
				-Wmissing-prototypes -Wstrict-prototypes	\
				-Wold-style-definition

# DEPENDENCIES .H FILES || Maybe commande or keyword MD to dress dependencies list

%.o: %.c includes/
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

CPPFLAGS	=	-I./includes/

SRCS		=	ft_printf.c									\
				interceptor.c								\
				flags.c										\
				number_width.c								\
				print_number.c								\
				buff_writer.c								\
				specifiers/spec_c.c							\
				specifiers/spec_d.c							\
				specifiers/spec_u.c							\
				specifiers/spec_o.c							\
				specifiers/spec_s.c							\
				specifiers/spec_p.c							\
				specifiers/spec_x.c							\
				specifiers/spec_percent.c

OBJS		=	$(addprefix $(SRCSPATH)/, $(SRCS:.c=.o))

all			:	$(NAME) test

$(NAME)		:	$(OBJS)
	ar rc $(NAME) $?

clean		:
	rm -f $(OBJS)

fclean		:	clean
	rm -f $(NAME) $(OBJS)

re			:
	$(MAKE) $(MFLAGS) fclean
	$(MAKE) $(MFLAGS) all

.PHONY		:	 all clean fclean re

################################################################################

test		:	$(NAME)
	$(CC) -g -fsanitize=address -I./includes -L./ -lftprintf main.c -o test

g			:	$(OBJS)
	$(CC) -g $(OBJS) -o $(NAME)

fsanitize	:	$(OBJS)
	$(CC) -g -fsanitize=address $(OBJS) -o $(NAME)

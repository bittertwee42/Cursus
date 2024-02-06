# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 14:18:40 by fchieric          #+#    #+#              #
#    Updated: 2024/02/06 16:04:00 by fchieric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putnbr_u.c \
ft_putstr.c ft_putptr.c

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.c=.o}

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}

	ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

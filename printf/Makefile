# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 14:18:40 by fchieric          #+#    #+#              #
#    Updated: 2024/02/05 14:31:26 by fchieric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I./libft

OBJS = ${SRCS:.c=.o}

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): libft ${OBJS}

    ar rcs ${NAME} ${OBJS} libft/*.o

all:	${NAME}

clean:
    ${RM} ${OBJS}
    make -C libft clean

fclean: clean
    ${RM} ${NAME}
    make -C libft fclean

re:     fclean all

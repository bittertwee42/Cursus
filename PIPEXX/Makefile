# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 16:20:24 by fchieric          #+#    #+#              #
#    Updated: 2024/02/27 16:22:59 by fchieric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex.a

SRCS = pipex.h pipex.c

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

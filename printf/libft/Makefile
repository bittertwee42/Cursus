# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 16:13:52 by fchieric          #+#    #+#              #
#    Updated: 2024/02/05 18:32:17 by fchieric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_base.c ft_nlen.c

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OUT = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): $(OUT)
		ar rcs $(NAME) $(OUT)

all:	$(NAME)

clean:
		rm -f $(OUT)

fclean: clean
		rm -f $(NAME)

re: 	fclean all

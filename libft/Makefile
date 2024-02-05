# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 16:13:52 by fchieric          #+#    #+#              #
#    Updated: 2024/02/02 10:15:59 by fchieric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_isalpha.c\
ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c\
ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strdup.c ft_striteri.c\
ft_strjoin.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
ft_substr.c ft_atoi.c ft_itoa.c ft_split.c ft_bzero.c ft_memchr.c ft_memcmp.c\
ft_memcpy.c ft_memcpy.c ft_memmove.c ft_memcpy.c ft_memset.c ft_calloc.c

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OUT = $(SRCS:.c=.o)

BOUT = $(BSRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): $(OUT)
		ar rcs $(NAME) $(OUT)

bonus: 	$(BOUT)
		ar rcs $(NAME) $(BOUT)

all:	$(NAME)

clean:
		rm -f $(OUT) $(BOUT)

fclean: clean
		rm -f $(NAME)

re: 	fclean all

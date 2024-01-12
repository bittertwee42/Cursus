# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.j                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchieric <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 15:58:19 by fchieric          #+#    #+#              #
#    Updated: 2024/01/12 16:05:25 by fchieric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_memcmp(void *s1, void *s2, size_t n);
void 			*ft_memset(void *b, int c, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *s, const char *to_find, size_t len);

#endif

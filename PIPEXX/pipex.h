/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:23:51 by fchieric          #+#    #+#             */
/*   Updated: 2024/03/06 19:41:11 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H

# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdint.h>

/* get_next_line */
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

char	*get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(const char *s);
char	*gnl_alloc(char *ptr);
void	ft_strcat(char *dest, char *src);
void	strcat_nl(char *dest, char *src);

/* ft_printf */
int				ft_printf(const char *format, ...);
int				ft_putchar(char c);
int				ft_putnbr(int n);
int				ft_putnbr_u(unsigned int n);
unsigned int	ft_putnbr_base(unsigned int nb, char f);
uintptr_t		ft_putptr(uintptr_t nb);
int				ft_putstr(char *s);

/* pipex */


/* utils and split */
char	**ft_split(char const *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif

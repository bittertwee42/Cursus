/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:43:10 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/05 18:38:52 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int				ft_putchar(char c);
int				ft_putstr(char *s);
void			ft_putnbr(int n);
int				ft_nlen(uintptr_t n);
unsigned int	ft_putnbr_base(uintptr_t nb, char f);

#endif

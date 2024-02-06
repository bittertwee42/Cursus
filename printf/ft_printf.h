/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:18:35 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/06 16:03:32 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int				ft_printf(const char *format, ...);
int				ft_putchar(char c);
int				ft_putnbr(int n);
int				ft_putnbr_u(unsigned int n);
unsigned int	ft_putnbr_base(unsigned int nb, char f);
uintptr_t		ft_putptr(uintptr_t nb);
int				ft_putstr(char *s);

#endif

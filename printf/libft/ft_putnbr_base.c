/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:00:57 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/05 18:31:42 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_digit(uintptr_t nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_digit(-nb, base);
	}
	if (nb >= 16)
	{
		ft_digit(nb / 16, base);
		ft_putchar(base[nb % 16]);
	}
	else if (nb >= 0)
		ft_putchar(base[nb % 16]);
}

unsigned int	ft_putnbr_base(uintptr_t nb, char f)
{
	int		len;
	char	*base;

	len = nlen(nb);
	if (f == 'p')
	{
		base = "0123456789abcdef";
		ft_putstr("0x");
		len += 2;
		ft_digit(nb, &base);
	}
	else if (f == 'x')
	{
		base = "0123456789abcdef";
		ft_digit(nb, &base);
	}
	else if (f == 'X')
	{
		base = "0123456789ABCDEF";
		ft_digit(nb, &base);
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:00:57 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/06 16:08:56 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_digit(unsigned int nb, char *base)
{
	unsigned int	len;

	len = 0;
	if (nb < 0)
		len += ft_digit(-nb, base);
	if (nb >= 16)
		len += ft_digit(nb / 16, base);
	len += ft_putchar(base[nb % 16]);
	return (len);
}

unsigned int	ft_putnbr_base(unsigned int nb, char f)
{
	int			len;
	char		*base;

	len = 0;
	if (f == 'x')
	{
		base = "0123456789abcdef";
		len += ft_digit(nb, base);
	}
	else if (f == 'X')
	{
		base = "0123456789ABCDEF";
		len += ft_digit(nb, base);
	}
	return (len);
}

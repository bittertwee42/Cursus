/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:59:31 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/06 16:09:12 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static uintptr_t	ft_digit(uintptr_t nb, char *base)
{
	uintptr_t	len;

	len = 0;
	if (nb < 0)
		len += ft_digit(-nb, base);
	if (nb >= 16)
		len += ft_digit(nb / 16, base);
	len += ft_putchar(base[nb % 16]);
	return (len);
}

uintptr_t	ft_putptr(uintptr_t nb)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	len += ft_putstr("0x");
	len += ft_digit(nb, base);
	return (len);
}

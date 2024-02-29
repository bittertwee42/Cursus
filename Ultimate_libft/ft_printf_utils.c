/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:59:50 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/29 12:04:27 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

unsigned int	ft_digit(unsigned int nb, char *base)
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

int	ft_putnbr(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb == -2147483648)
	{
		len += ft_putchar('-');
		len += ft_putstr("2147483648");
		return (len);
	}
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
		len += ft_putchar(nb + '0');
	return (len);
}

uintptr_t	ft_digit_u(uintptr_t nb, char *base)
{
	uintptr_t	len;

	len = 0;
	if (nb < 0)
		len += ft_digit_u(-nb, base);
	if (nb >= 16)
		len += ft_digit_u(nb / 16, base);
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
	len += ft_digit_u(nb, base);
	return (len);
}

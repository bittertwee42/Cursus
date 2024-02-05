/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:39:07 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/05 18:40:02 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_s(int n)
{
	int	len;

	len = ft_nlen(n);
	while (n)
	{
		if (n == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			n = 147483648;
		}
		if (n < 0)
		{
			ft_putchar('-');
			ft_putnbr_s(-n);
		}
		if (n > 9)
		{
			ft_putnbr_s(n / 10);
			ft_putnbr_s(n % 10);
		}
		else
			ft_putchar(n + '0');
	}
	return (len);
}

int	ft_putnbr_u(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		if (n == -2147483648)
		{
			ft_putchar('2');
			len += 1;
			n = 147483648;
		}
		if (n < 0)
		{
			n = -n;
			ft_putnbr_u(n);
		}
		if (n > 9)
		{
			ft_putnbr_s(n / 10);
			ft_putnbr_s(n % 10);
		}
		else
			ft_putchar(n + '0');
	}
	return (len);
}

void	ft_putnbr(int n)
{
	if (f == 'd' || f == 'i')
		ft_putnbr_s(n);
	else if (f == 'u')
		ft_putnbr_s(n);
}

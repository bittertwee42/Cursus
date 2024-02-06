/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:39:07 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/06 16:10:56 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putnbr_u(n / 10);
		count += ft_putnbr_u(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}

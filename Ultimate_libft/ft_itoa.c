/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:02:02 by fabi              #+#    #+#             */
/*   Updated: 2024/02/01 23:03:57 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizenb(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	else if (n < 0)
		count++;
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = sizenb(n);
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	if (n >= 0 && n < 9)
	{
		res[0] = n + '0';
		return (res);
	}
	while (len-- >= 0 && n)
	{
		if (n < 0)
			res[len] = (-(n % 10)) + '0';
		else
			res[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:43:19 by fchieric          #+#    #+#             */
/*   Updated: 2024/01/18 16:37:38 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count && size && (4294967295U / size <= count))
		return (NULL);
	res = malloc(count * size);
	if (res == NULL)
		return (res);
	ft_bzero(res, (count * size));
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:17:40 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/22 15:21:32 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	i;
	void	*res;

	res = malloc(num * size);
	if (res == NULL)
		return (res);
	i = 0;
	while (i < num * size)
	{
		((unsigned char *)res)[i] = '\0';
		i++;
	}
	return (res);
}
int	has_newline(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == '\n')
			return (str + i + 1);
		i++;
	}
	return (0);
}

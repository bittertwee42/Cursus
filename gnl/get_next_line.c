/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:17:03 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/22 15:18:24 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer_one[BUFFER_SIZE + 1];
	char		*line;
	int			i:
	int			elem_read;

	i = 0;
	line = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	while (elem_read >= 0 && has_newline(line) == 0)

}

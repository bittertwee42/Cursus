/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:17:03 by fchieric          #+#    #+#             */
/*   Updated: 2024/02/26 18:32:52 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_alloc(char *ptr)
{
	char	*res;

	res = ft_calloc(ft_strlen(ptr) + BUFFER_SIZE + 1, sizeof(char)); //allochiamo sempre 1 BUFFERSIZE alla volta
	if (!res)
		return (NULL);
	if (ptr)
		ft_strcat(res, ptr);
	free(ptr);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			readreturn; //return del read

	readreturn = 1;
	line = NULL;
	while (!ft_strchr(line, '\n'))
	{
		if (!*buffer) // per non sovrascrivere
			readreturn = read(fd, buffer, BUFFER_SIZE);
		if (readreturn <= 0) //se io non ho letto niente, esco
			break ;
		line = gnl_alloc(line); //dafare
		strcat_nl(line, buffer); //dafare
	}
	if (line && *line)
		return (line);
	free(line);
	return (NULL);
}

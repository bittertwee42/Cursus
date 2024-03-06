/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchieric <fchieric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:23:48 by fchieric          #+#    #+#             */
/*   Updated: 2024/03/06 19:53:36 by fchieric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex.h>

char	*get_path(char **envp)
{
	char	*full_path;
	char	**split_path;
	char	*right_path;
	int		i;

	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
			full_path = envp[i] + 5; /* cosi i punta a dopo lúguale dopo il path */
		i++;
	}
	split_path = ft_split(full_path, ':');
	i = 0;
	while (split_path[i])
	{
		access();
	}
	return(path);
}

int	main(int argc, char **argv, char **envp)
{
	if (argc >= 5)
	{
		get_path()
		//control_cmd(argv[argc - 1], argv[1]); /* takes the command and the name of the first file */
	}
	else
	{
		write(2, "Error: wrong number of arguments\n", 33);
		return (1);
	}
	return (0);
}

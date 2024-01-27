/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmichali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:41:44 by vmichali          #+#    #+#             */
/*   Updated: 2024/01/27 14:41:47 by vmichali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error(void)
{
	perror("\033[31mError");
	exit(EXIT_FAILURE);
}

char	*get_path(char *path_env, char *cmd, int i, int j)
{
	char	*path;
	char	*path_full;

	i = 0;
	path = (char *)ft_calloc(1024, sizeof(char));
	while (path_env[i] != '\0')
	{
		j = 0;
		while (path_env[i] != ':' && path_env[i] != '\0')
			path[j++] = path_env[i++];
		path[j] = '/';
		path_full = ft_strjoin(path, cmd);
		if (access(path_full, F_OK) == 0)
		{
			free(path);
			return (path_full);
		}
		ft_bzero(path, 1024);
		free(path_full);
		i++;
	}
	free(path);
	return (NULL);
}

char	*find_path(char *cmd, char **envp)
{
	int		i;
	char	*path_env;
	char	*path;

	i = -1;
	path_env = NULL;
	while (envp[++i] != NULL)
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
		{
			path_env = envp[i] + 5;
			break ;
		}
	}
	path = NULL;
	if (path_env[0] != '\0')
		path = get_path(path_env, cmd, 0, 0);
	return (path);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:38:00 by bkhatib           #+#    #+#             */
/*   Updated: 2022/09/17 13:38:40 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

char	**get_export(char **env, char **my_env, char **cmd, int index)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while(env[i])
	{
		if (i != index)
		{
			while(env[i][j])
			{
				my_env[i][j] = env[i][j];
				j++;
			}
			my_env[i][j] = '\0';
			j = 0;
		}
		i++;
	}
	my_env[i] = NULL;
	i = 1;
	j = 0;
	while(i < 3)
	{
		while(cmd[i][j])
		{
			my_env[index][j] = cmd[i][j];
			j++;
		}
		my_env[i][j] = '\0';
		j = 0;
		i++;
	}
	return(my_env);
}
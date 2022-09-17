/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:55:06 by bkhatib           #+#    #+#             */
/*   Updated: 2022/09/17 11:43:00 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	print_env(char **env)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while(env[i])
	{
		while(env[i][j])
		{
			printf("%c", env[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}

char	**malloc_env(char **env, int nbr_var)
{
	int	i;
	
	i = 0;
	env = (char**)malloc(nbr_var * sizeof(char*));
	if (env == NULL)
	{
		printf("Memory not allocated.\n");
		exit(0);
	}
	while(i < nbr_var)
	{
		env[i] = (char*)malloc(255 * sizeof(char));
		if (env[i] == NULL)
		{
			printf("Memory not allocated.\n");
			exit(0);
		}
		i++;
	}
	return(env);
}

char	**get_env(char **env, char **my_env)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while(env[i])
	{
		while(env[i][j])
		{
			my_env[i][j] = env[i][j];
			j++;
		}
		my_env[i][j] = '\0';
		j = 0;
		i++;
	}
	my_env[i] = NULL;
	return(my_env);
}
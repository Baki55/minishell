/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:15:59 by bkhatib           #+#    #+#             */
/*   Updated: 2022/09/18 18:59:16 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

char	**ft_unset(char **env, char **cmd)
{
	int	nbr_var;
	char	**new_env;
	int	i_old;
	int	i;
	int	j;
	
	i_old = 0;
	i = 0;
	j = 0;
	nbr_var = 0;
	while(env[nbr_var])
		nbr_var++;
	new_env = malloc_env(new_env, nbr_var);
	while(env[i_old] != NULL && (strcmp(env[i_old], cmd[1]) != 0))
	{
		while(env[i_old][j])
		{
			new_env[i][j] = env[i_old][j];
			j++;
		}
		new_env[i][j] = '\0';
		j = 0;
		i++;
		i_old++;
	}
	printf("i_old = %d, i = %d var = %s\n",i_old ,i, env[i_old]);
	while(env[i_old] != NULL)
	{
		while(env[i_old][j])
		{
			new_env[i][j] = env[i_old][j];
			j++;
		}
		new_env[i][j] = '\0';
		j = 0;
		i++;
		i_old++;
	}
	return (new_env);
}
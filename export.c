/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:44:58 by bkhatib           #+#    #+#             */
/*   Updated: 2022/09/17 13:32:35 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

char	**ft_export(char **env, char **cmd)
{
	int	nbr_var;
	int	index;
	char	**new_env;
	
	nbr_var = 0;
	index = -1;
	while(env[nbr_var])
	{
		if(strcmp(env[nbr_var], cmd[1]) == 0)
			index = nbr_var;
		nbr_var++;
	}
	if(index != -1)
		new_env = malloc_env(env, nbr_var + 1);
	else
		new_env = malloc_env(env, nbr_var);
	new_env = get_export(env, new_env, cmd, index);
	return (new_env);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:44:58 by bkhatib           #+#    #+#             */
/*   Updated: 2022/09/16 17:12:03 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

void	ft_export(char **env, char **cmd)
{
	int	nbr_var;
	int	status;
	char	**new_env;
	
	nbr_var = 0;
	status = 0;
	while(env[nbr_var])
	{
		if(strcmp(env[nbr_var], cmd[1]) == 0)
			status = 1;
		nbr_var++;
	}
	if(status == 0)
		new_env = malloc_env(env, nbr_var + 1);
	else
		new_env = malloc_env(env, nbr_var);
}
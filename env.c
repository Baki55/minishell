/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:55:26 by bkhatib           #+#    #+#             */
/*   Updated: 2022/09/17 12:55:42 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

void	ft_env(char **env)
{
	int	len;
	char **my_env;

	len = 0;
	while(env[len])
		len++;
	my_env = malloc_env(my_env, len);
	my_env = get_env(env, my_env);
	print_env(my_env);
}
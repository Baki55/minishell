/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buitlins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:04:02 by bkhatib           #+#    #+#             */
/*   Updated: 2022/09/15 15:06:53 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	print_env(char **env);
char	**malloc_env(char **env, int nbr_var);
char	**get_env(char **env, char **my_env);
void	ft_env(char **env);
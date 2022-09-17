/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:04:02 by bkhatib           #+#    #+#             */
/*   Updated: 2022/09/17 14:14:15 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

void	print_env(char **env);
char	**malloc_env(char **env, int nbr_var);
char	**get_env(char **env, char **my_env);
void	ft_env(char **env);

char	**ft_export(char **env, char **cmd);
char	**get_export(char **env, char **my_env, char **cmd, int index);

char *ft_pwd();
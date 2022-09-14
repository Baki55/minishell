#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv, char **envp)
{
	int	i;
	int j;
	char **my_env;

	i = 0;
	j = 0;
	while(envp[i])
		i++;
	my_env = (char**)malloc(i * sizeof(char*));
	i = 0;
	while(envp[i])
	{
		my_env[i] = (char*)malloc(255 * sizeof(char));
		i++;
	}
	i = 0;
	while(envp[i])
	{
		while(envp[i][j])
		{
			my_env[i][j] = envp[i][j];
			j++;
		}
		my_env[i][j] = '\0';
		j = 0;
		i++;
	}
	my_env[i] = NULL;
	i = 0;
	while(my_env[i])
	{
		while(my_env[i][j])
		{
			printf("%c", my_env[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	return (0);
}
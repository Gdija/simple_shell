#include "shell.h"
/**
*env_prom - print current environment
*
*/
void env_prom(void)
{
	char **env = environ;
	int i = 0;

	while (*env[i])
	{
	printf("%s\n", *env);
	i++;
	}
}

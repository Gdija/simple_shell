#include "shell.h"
/**
 *prom - run shell
 *@av: argument value
 *@env: environment
 */
void prom(char **av, char **env)
{
	char *buff = NULL;
	size_t buffsize = 0;
	char *argv[] = {NULL, NULL};
	pid_t pid;
	char c = '$';
	ssize_t mem;
	int status, x = 0;

	(void) **av;
	while (1)
	{
	_putchar(c);
	mem = getline(&buff, &buffsize, stdin);
	if (mem == -1)
	{
	free(buff);
	exit(EXIT_FAILURE);
	}
	while (buff[x])
	{
	if (buff[x] == '\n')
		buff[x] = 0;
	x++;
	}
	argv[0] = buff;
	pid = fork();
	if (pid == -1)
	{
	free(buff);
	exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
	if (execve(argv[0], argv, env) == -1)
		perror("failed");
	}
	else
		wait(&status);
	}
}


#include "shell.h"
/**
*main - write a command line interpreter
*
*Return: always 0
*/
int main(void)
{
	char *mem;
	size_t memsize = 64;
	pid_t pid;
	int i;
	char *argv[2];
	char *envp[2];
	char c = '$';

	mem = malloc(memsize * sizeof(char));
	_putchar(c);
	getline(&mem, &memsize, stdin);
	for (i = 0; i < *mem; i++)
	{
	_putchar(*mem);
	_putchar('\n');
	}
	pid = fork();
	if (pid == -1)
	{
	perror("it's failed");
	return (1);
	}
	else if (pid == 0)
	{
	execve(argv[0], argv, envp);
	}
	else if (execve(argv[0], argv, envp) == -1)
	{
	perror("failed");
	}
	wait(NULL);
	free(mem);
	return (0);
}

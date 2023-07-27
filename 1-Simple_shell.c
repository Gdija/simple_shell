#include "shell.h"
#define BUFFER_SIZE 1024

/**
*main - write a command line interpreter
*
*Return: always 0
*/
int main(void)
{
	char *mem;
	size_t memsize = BUFFER_SIZE;
	pid_t pid;
	unsigned int i;
	char c = '$';
	ssize_t n;

	mem = malloc(memsize * sizeof(char));
	if (mem == NULL)
	{
	perror("failed");
	return (1);
	}
	_putchar(c);
	n = getline(&mem, &memsize, stdin);
	for (i = 0; i < memsize; i++)
	{
	_putchar(mem[i]);
	}
	_putchar('\n');
	if (n == -1)
	{
	perror("failed");
	free(mem);
	return (-1);
	}
	if (mem[n - 1] == '\n')
		mem[n - 1] = '\0';
	pid = fork();
	if (pid == -1)
	{
	perror("it's failed");
	free(mem);
	return (1);
	}
	else if (pid == 0)
	{
	char **argv = malloc(2 * sizeof(char *));

	if (argv == NULL)
	{
	perror("failed");
	return (1);
	}
	argv[0] = mem;
	argv[1] = NULL;
	if (execve(mem, argv, environ) == -1)
	{
	perror("failed");
	return (1);
	}
	else
	{
	wait(NULL);
	}
	}
	return (0);
}

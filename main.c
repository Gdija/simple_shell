#include "shell.h"
/**
 * main - run a simple shell
 * @ac: argument count
 * @av: argument vector
 * @env: environment
 * Return: always 0
 */
int main(int ac, char **av, char **env)
{
	if (ac == 1)
		prom(av, env);
	return (0);
}

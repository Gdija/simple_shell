#ifndef SHELL_H
#define SHELL_H

extern char **environ;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int ac, char **av, char **env);
int _putchar(char c);
void prom(char **av, char**env);
#endif

#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
int _putchar(char c);
void prom(char **av, char **env);
void handle_prom_arg();
void env_prom(void);



#endif

#include "shell.h"
/**
* handle_prom_arg - handle arguments
*
*Return: nothing
*/
#define MAX_CMD 10
void handle_prom_arg()
{
	char *buff = NULL;
	char *argv[MAX_CMD];
	int j = 0;
	
	argv[j]= strtok(buff, " ");
	while (argv[j])
	{
	j++;
	argv[j] = strtok(NULL, " ");
	}
}

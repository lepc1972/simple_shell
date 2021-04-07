#include "shell.h"
/**
 *
 */
int execute_command(char **arguments)
{
	if (strcmp(arguments[0], "exit") == 0)
		exit(0);

	return (0);
}

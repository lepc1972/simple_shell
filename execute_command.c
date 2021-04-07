#include "shell.h"
/**
 *
 */
int execute_command(char **arguments)
{
	int i;
	extern char **environ;

	if (strcmp(arguments[0], "exit") == 0)
		exit(0);

	else if (strcmp(arguments[0], "env") == 0)
	{
		for (i = 0; environ[i] != NULL; i++)
			printf ("%s\n", environ[i]);
	}
	return (0);
}

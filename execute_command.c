#include "shell.h"
/**
 *
 */
int execute_arguments(char **arguments)
{
	int i;

	for (i = 0; arguments[i] != NULL; i++)
	{
		switch (arguments)
		{
		case "exit":
			printf("perror");
			exit;

		default:
			printf("Haga otra cosa");
		}
	}
}

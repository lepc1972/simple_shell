#include "shell.h"
/**
 *
 */
int execute_command(char **arguments)
{
	int i;
	int status;
	pid_t child_process;
	extern char **environ;

	if (strcmp(arguments[0], "exit") == 0)
		exit(0);

	else if (strcmp(arguments[0], "env") == 0)
	{
		for (i = 0; environ[i] != NULL; i++)
			printf ("%s\n", environ[i]);
	}
	/*else if (stat(???) == -1)
	{
		printf("sh: command not found: %s\n", arguments[0]);
		}*/
	else
	{
		child_process = fork();
		if (child_process == 0)
		{
			execve(arguments[0], arguments, environ);
			wait(&status);
		}
	}
	return (0);
}

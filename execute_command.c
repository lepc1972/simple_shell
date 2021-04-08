#include "shell.h"
/**
 *
 */
int execute_command(char **arguments)
{
	int i;
	int status;
	pid_t child_process, wchild;
	extern char **environ;

	if (_strcmp(arguments[0], "exit") == 0)
		exit(EXIT_SUCCESS);

	else if (_strcmp(arguments[0], "env") == 0)
	{
		for (i = 0; environ[i] != NULL; i++)
			printf ("%s\n", environ[i]);
	}

	else if (access(arguments[0], F_OK) != -1)
	{
		child_process = fork();

		if (child_process == 0)
		{
			execve(arguments[0], arguments, environ);
		}

		wait(&status);
	}

	else
	{
		write(STDOUT_FILENO, "hsh: 1: ", 8);
		write(STDOUT_FILENO, arguments[0], _strlen(arguments[0]));
		write(STDOUT_FILENO, ": not found\n", 12);
	}

	return (0);
}

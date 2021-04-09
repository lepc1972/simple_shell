#include "shell.h"
/**
 *
 */
int execute_command(char **arguments, char *argv[])
{
	int i, status, flag;
	pid_t child_process, wchild;
	extern char **environ;

	flag = isatty(STDIN_FILENO);

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

	else if (flag == 1)
		printf("%s: command not found: %s\n", argv[0], arguments[0]);

	else
		printf("%s: 1: %s: not found\n", argv[0], arguments[0]);

	return (0);
}

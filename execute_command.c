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

	if (strcmp(arguments[0], "exit") == 0)
		exit(0);

	else if (strcmp(arguments[0], "env") == 0)
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

		wchild = waitpid(child_process, &status, WUNTRACED);

		return (0);
	}

	else
	{
		printf("sh: command not found: %s\n", arguments[0]);
	}

	return (0);
}

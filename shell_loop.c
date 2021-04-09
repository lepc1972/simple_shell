#include "shell.h"

void shell_loop(char *argv[])
{
	char *command_line;
	char **arguments;
	int count = 0, status;

	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);

		count++;

		command_line = function_getline();
		arguments = function_arguments(command_line);
		status = execute_command(arguments, argv, count);

		free(command_line);
		free(arguments);
	}

}

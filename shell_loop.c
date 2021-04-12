#include "shell.h"
/**
* shell_loop - function that create a loop for shell
* @argv: arguments
*
* Return: void
*/
void shell_loop(char *argv[])
{
char *command_line;
char **arguments;
int count = 0;

while (1)
{
write(STDOUT_FILENO, "$ ", 2);

count++;

command_line = function_getline();
arguments = function_arguments(command_line);
execute_command(arguments, argv, count, command_line);

free(command_line);
free(arguments);
}

}

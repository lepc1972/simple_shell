#include "shell.h"

void shell_loop(void)
{
    char *command_line;
    char **arguments;
    int status = 1;

    while (status != 0)
    {
        printf("$ ");

        command_line = function_getline();
        arguments = function_arguments(command_line);
        //status = execute_command(arguments);

        free(command_line);
        free(arguments);



    }

}
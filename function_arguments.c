#include "shell.h"
char **function_arguments(char *command_line)
{
        int size = _strlen(command_line);
        char *token;
        char **arguments_token = malloc(sizeof(char*) * size);
        int i;
        if (!arguments_token)
        {
                perror("error args");
                exit;
        }
        token = strtok(command_line, " ");
        for (i = 0; token != NULL; i++)
        {
                arguments_token[i] = token;
                token = strtok(NULL, " ");
        }
        return (arguments_token);
}

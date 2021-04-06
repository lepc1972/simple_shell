#include "shell.h"

char **function_arguments(char *command_line)
{
    int buffer_size[1024];
    char *token;
    char **arguments_token = malloc(sizeof(char*)  * buffer_size[1024]);
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
        printf("%s \n", arguments_token[i] );


    }







    return (arguments_token);





}
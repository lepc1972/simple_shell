#include "shell.h"
int lenght_line(char *command_line)
{
	int i = 0;
	while (command_line[i])
		i++;
	return (i);
}
char **function_arguments(char *command_line)
{
	int size = lenght_line(command_line);
	char *token;
	char **arguments_token = malloc(sizeof(char*)  * size);
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
		printf("%i, %s\n", i, arguments_token[i]);
	}
	return (arguments_token);
}

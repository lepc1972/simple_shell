#include "shell.h"
/**
* function_getline - function that gets the string introduced by user
*
*Return: command line
*/
char *function_getline()
{
char *command_line = NULL;
size_t buf_size;
ssize_t line_size;
int i;

line_size = getline(&command_line, &buf_size, stdin);
if (line_size == EOF)
{
exit(0);
}

for (i = 0;  command_line[i] != '\0'; i++)
{
if (command_line[i] == '\n')
command_line[i] = '\0';
}



return (command_line);
}

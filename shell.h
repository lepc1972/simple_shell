#ifndef HOLBERTON_H
#define HOLBERTON_H

/*Libraries*/
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*prototypes*/
void shell_loop(void);
char **function_arguments(char *command_line);
char *function_getline();
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
int execute_command(char **arguments);

#endif

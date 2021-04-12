#ifndef HOLBERTON_H
#define HOLBERTON_H

/*Libraries*/
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/*prototypes*/
extern char **environ;
void shell_loop(char *argv[]);
char **function_arguments(char *command_line);
char *function_getline();

int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int execute_command(char **arguments, char *argv[], int count, char *line);
int print_integer(va_list pa);
int print_character(va_list pa);
int print_string(va_list pa);
int _printf(const char *format, ...);
int _putchar(char c);

#endif

#include "shell.h"

char *function_getline()
  {
        char *command_line = NULL;
        size_t buf_size;
        ssize_t line_size;

        line_size = getline(&command_line, &buf_size, stdin);
        if (line_size == -1)
          {

                perror("Error");

          }

          return (command_line);
 }

#include "shell.h"
/**
* main - function that contains the loop
* @argc: args
* @argv: arg values
*
* Return: 0
*/
int main(int argc, char *argv[])
{
(void)argc;

shell_loop(argv);
return (0);
}

#include "shell.h"
/**
 *_strcmp - function that compares two strings.
 *@s1: Firs string to be compared.
 *@s2: Second string to be compared
 * Return: result.
 */
int _strcmp(char *s1, char *s2)
{
	int i =0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/**
 *
 *
 */
int _strlen(char *str)
{
        int i = 0;
        while (str[i])
                i++;
        return (i);
}

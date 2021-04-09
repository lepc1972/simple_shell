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
/**
 *_strcat - Function that concatenates 2 strings.
 *@dest: First string to be concatenated.
 *@src: String to be appended.
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

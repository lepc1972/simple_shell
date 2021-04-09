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
 *_strncat - Function that concatenates 2 strings.
 *@dest: First string to be concatenated.
 *@src: String to be appended.
 *@n: Bytes from src.
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}

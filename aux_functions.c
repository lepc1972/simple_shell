#include "shell.h"
/**
*_strcmp - function that compares two strings.
*@s1: Firs string to be compared.
*@s2: Second string to be compared
* Return: result.
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}
/**
*_strlen - length of strings..
*@str: String to be measured.
*Return: int.
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
*@n: number of characters
* Return: Pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

n = 0;
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
/**
* _printf - function that print characters for condicional character
* @format: char pointer
*
* Return: integer equal to lenght the print
*/


int _printf(const char *format, ...)
{
va_list pa;
const char *p;
int num = 0;

if (format == NULL)
return (-1);

va_start(pa, format);
for (p = format; *p; p++)
{
if (*p == '%')
{
switch (*++p)
{
case 's':
num = num + print_string(pa);
break;
case 'c':
num = num + print_character(pa);
break;
case '%':
num = num + 1;
_putchar('%');
break;
case '\0':
return (-1);
case 'i':
case 'd':
num = num + print_integer(pa);
break;
default:
_putchar('%'), _putchar(*p), num = num + 2;
}
}
else
_putchar(*p), num++;
}
va_end(pa);
return (num);
}




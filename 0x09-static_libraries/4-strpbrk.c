#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to search
 * @accept: the set of accepted characters
 *
 * Return: pointer to first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s != '\0')
{
i = 0;
while (accept[i] != '\0')
{
if (*s == accept[i])
return (s);
i++;
}
s++;
}
return (0);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to use
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1;
unsigned int len2;
unsigned int i;
unsigned int j;

len1 = 0;
len2 = 0;

if (s1 != NULL)
while (s1[len1] != '\0')
len1++;

if (s2 != NULL)
while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
return (NULL);

i = 0;
while (i < len1)
{
result[i] = s1[i];
i++;
}

j = 0;
while (j < n)
{
result[i] = s2[j];
i++;
j++;
}

result[i] = '\0';

return (result);
}

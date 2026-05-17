#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *result;
int len1;
int len2;
int i;
int j;

len1 = 0;
len2 = 0;

if (s1 != NULL)
while (s1[len1] != '\0')
len1++;

if (s2 != NULL)
while (s2[len2] != '\0')
len2++;

result = malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
return (NULL);

i = 0;
while (i < len1)
{
result[i] = s1[i];
i++;
}

j = 0;
while (j < len2)
{
result[i] = s2[j];
i++;
j++;
}

result[i] = '\0';

return (result);
}

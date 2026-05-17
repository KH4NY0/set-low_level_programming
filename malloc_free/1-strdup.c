#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
0-create_array.c char *dup;
0-create_array.c int len;
0-create_array.c int i;

0-create_array.c if (str == NULL)
0-create_array.c 0-create_array.c return (NULL);

0-create_array.c len = 0;
0-create_array.c while (str[len] != '\0')
0-create_array.c 0-create_array.c len++;

0-create_array.c dup = malloc(sizeof(char) * (len + 1));
0-create_array.c if (dup == NULL)
0-create_array.c 0-create_array.c return (NULL);

0-create_array.c i = 0;
0-create_array.c while (i <= len)
0-create_array.c {
0-create_array.c 0-create_array.c dup[i] = str[i];
0-create_array.c 0-create_array.c i++;
0-create_array.c }

0-create_array.c return (dup);
}

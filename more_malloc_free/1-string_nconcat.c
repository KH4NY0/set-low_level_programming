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
0-malloc_checked.c char *result;
0-malloc_checked.c unsigned int len1;
0-malloc_checked.c unsigned int len2;
0-malloc_checked.c unsigned int i;
0-malloc_checked.c unsigned int j;

0-malloc_checked.c len1 = 0;
0-malloc_checked.c len2 = 0;

0-malloc_checked.c if (s1 != NULL)
0-malloc_checked.c 0-malloc_checked.c while (s1[len1] != '\0')
0-malloc_checked.c 0-malloc_checked.c 0-malloc_checked.c len1++;

0-malloc_checked.c if (s2 != NULL)
0-malloc_checked.c 0-malloc_checked.c while (s2[len2] != '\0')
0-malloc_checked.c 0-malloc_checked.c 0-malloc_checked.c len2++;

0-malloc_checked.c if (n >= len2)
0-malloc_checked.c 0-malloc_checked.c n = len2;

0-malloc_checked.c result = malloc(sizeof(char) * (len1 + n + 1));
0-malloc_checked.c if (result == NULL)
0-malloc_checked.c 0-malloc_checked.c return (NULL);

0-malloc_checked.c i = 0;
0-malloc_checked.c while (i < len1)
0-malloc_checked.c {
0-malloc_checked.c 0-malloc_checked.c result[i] = s1[i];
0-malloc_checked.c 0-malloc_checked.c i++;
0-malloc_checked.c }

0-malloc_checked.c j = 0;
0-malloc_checked.c while (j < n)
0-malloc_checked.c {
0-malloc_checked.c 0-malloc_checked.c result[i] = s2[j];
0-malloc_checked.c 0-malloc_checked.c i++;
0-malloc_checked.c 0-malloc_checked.c j++;
0-malloc_checked.c }

0-malloc_checked.c result[i] = '\0';

0-malloc_checked.c return (result);
}

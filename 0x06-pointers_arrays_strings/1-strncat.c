#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: max bytes to use from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
0-strcat.c int i;
0-strcat.c int j;

0-strcat.c i = 0;
0-strcat.c j = 0;
0-strcat.c while (dest[i] != '\0')
0-strcat.c 0-strcat.c i++;
0-strcat.c while (src[j] != '\0' && j < n)
0-strcat.c {
0-strcat.c 0-strcat.c dest[i] = src[j];
0-strcat.c 0-strcat.c i++;
0-strcat.c 0-strcat.c j++;
0-strcat.c }
0-strcat.c dest[i] = '\0';
0-strcat.c return (dest);
}

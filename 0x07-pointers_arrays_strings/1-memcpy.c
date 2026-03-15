#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
0-memset.c unsigned int i;

0-memset.c i = 0;
0-memset.c while (i < n)
0-memset.c {
0-memset.c 0-memset.c dest[i] = src[i];
0-memset.c 0-memset.c i++;
0-memset.c }
0-memset.c return (dest);
}

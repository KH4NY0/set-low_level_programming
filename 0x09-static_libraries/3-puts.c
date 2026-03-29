#include "main.h"

/**
 * _puts - prints a string to stdout followed by a newline
 * @s: the string to print
 *
 * Return: void
 */
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}

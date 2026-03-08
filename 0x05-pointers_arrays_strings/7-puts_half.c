#include "main.h"

/**
 * puts_half - prints the second half of a string followed by a new line
 * @str: pointer to the string to print
 */
void puts_half(char *str)
{
int len, start, i;

len = 0;
while (str[len] != '\0')
len++;
start = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
i = start;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

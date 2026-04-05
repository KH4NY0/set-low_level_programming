#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int a;
int b;
int result;
int i;

if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a * b;
if (result < 0)
{
_putchar('-');
result = -result;
}
if (result == 0)
{
_putchar('0');
_putchar('\n');
return (0);
}
i = 1;
while (result / i >= 10)
i *= 10;
while (i >= 1)
{
_putchar('0' + result / i);
result %= i;
i /= 10;
}
_putchar('\n');
return (0);
}

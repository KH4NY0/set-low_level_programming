#include "main.h"
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i;
int j;
int sum;
int digit;

sum = 0;
if (argc == 1)
{
_putchar('0');
_putchar('\n');
return (0);
}
i = 1;
while (i < argc)
{
j = 0;
while (argv[i][j])
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
j++;
}
sum += atoi(argv[i]);
i++;
}
if (sum == 0)
{
_putchar('0');
_putchar('\n');
return (0);
}
digit = 1;
while (sum / digit >= 10)
digit *= 10;
while (digit >= 1)
{
_putchar('0' + sum / digit);
sum %= digit;
digit /= 10;
}
_putchar('\n');
return (0);
}

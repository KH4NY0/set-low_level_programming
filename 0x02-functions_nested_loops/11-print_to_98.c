#include "main.h"
/**

print_to_98 - prints all natural numbers from n to 98, followed by a new line
@n: starting number
*/
void print_to_98(int n)
{
int i;if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
{
if (i < 0)
{
_putchar('-');
if (i <= -100)
_putchar('0' + (-i / 100));
if (i <= -10)
_putchar('0' + ((-i / 10) % 10));
_putchar('0' + (-i % 10));
}
else
{
if (i >= 100)
_putchar('0' + (i / 100));
if (i >= 10)
_putchar('0' + ((i / 10) % 10));
_putchar('0' + (i % 10));
}
_putchar(',');
_putchar(' ');
}
else
{
_putchar('9');
_putchar('8');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
if (i != 98)
{
if (i >= 100)
_putchar('0' + (i / 100));
_putchar('0' + ((i / 10) % 10));
_putchar('0' + (i % 10));
_putchar(',');
_putchar(' ');
}
else
{
_putchar('9');
_putchar('8');
}
}
}
_putchar('\n');
}

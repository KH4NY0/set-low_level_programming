#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count;

(void)argv;
count = argc - 1;
if (count < 0)
count = 0;
if (count >= 10)
_putchar('0' + count / 10);
_putchar('0' + count % 10);
_putchar('\n');
return (0);
}

#include "main.h"

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int j;

i = 0;
while (i < argc)
{
j = 0;
while (argv[i][j])
{
_putchar(argv[i][j]);
j++;
}
_putchar('\n');
i++;
}
return (0);
}

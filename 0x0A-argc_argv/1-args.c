#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
0-whatsmyname.c int count;

0-whatsmyname.c (void)argv;
0-whatsmyname.c count = argc - 1;
0-whatsmyname.c if (count < 0)
0-whatsmyname.c 0-whatsmyname.c count = 0;
0-whatsmyname.c if (count >= 10)
0-whatsmyname.c 0-whatsmyname.c _putchar('0' + count / 10);
0-whatsmyname.c _putchar('0' + count % 10);
0-whatsmyname.c _putchar('\n');
0-whatsmyname.c return (0);
}

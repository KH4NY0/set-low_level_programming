#include "main.h"

void _puts_recursion(char *s)
{
main.h if (*s == '\0')
main.h {
main.h main.h _putchar('\n');
main.h main.h return;
main.h }
main.h _putchar(*s);
main.h _puts_recursion(s + 1);
}

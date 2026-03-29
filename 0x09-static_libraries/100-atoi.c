#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int sign;
int result;

sign = 1;
result = 0;
while (*s == ' ' || *s == '\t' || *s == '\n' ||
       *s == '\r' || *s == '\f' || *s == '\v')
s++;
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
s++;
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return (sign * result);
}

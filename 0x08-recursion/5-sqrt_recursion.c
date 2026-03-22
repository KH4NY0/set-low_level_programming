#include "main.h"

/**
 * _sqrt_helper - helper to find natural square root recursively
 * @n: the number to find the square root of
 * @i: current candidate value
 * Return: natural square root or -1 if none exists
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: natural square root or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}

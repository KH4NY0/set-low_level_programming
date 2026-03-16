#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
int i;
char sep[] = " \t\n,;.!?\"(){}";
int j;
int is_sep;

i = 0;
is_sep = 1;
while (str[i] != '\0')
{
j = 0;
is_sep = 0;
while (sep[j] != '\0')
{
if (str[i] == sep[j])
{
is_sep = 1;
break;
}
j++;
}
if (is_sep == 0 && i > 0)
{
j = 0;
while (sep[j] != '\0')
{
if (str[i - 1] == sep[j])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
break;
}
j++;
}
}
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
return (str);
}

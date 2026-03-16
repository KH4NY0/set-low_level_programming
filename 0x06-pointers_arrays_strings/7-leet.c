#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: pointer to the modified string
 */
char *leet(char *str)
{
int i;
int j;
char plain[] = "aAeEoOtTlL";
char leet_chars[] = "4433007711";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (plain[j] != '\0')
{
if (str[i] == plain[j])
{
str[i] = leet_chars[j];
break;
}
j++;
}
i++;
}
return (str);
}

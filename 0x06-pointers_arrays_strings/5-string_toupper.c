#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @n : variable
 * Return: string
 */

char *string_toupper(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 97 && n[i] <= 122)
{
n[i] = n[i] - 32;
}
}
return (n);
}

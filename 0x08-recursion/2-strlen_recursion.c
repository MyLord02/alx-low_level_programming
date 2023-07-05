#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *@s : string to be inserted
 *Return: lenfth of s
 */

int _strlen_recursion(char *s)
{
int i = 1;
if (*s != '\0')
{
i += _strlen_recursion(s + 1);
}
else
{
i--;
}
return (i);
}

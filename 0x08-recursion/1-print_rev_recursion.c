#include "main.h"

/**
 * _print_rev_recursion - reverse spring printed.
 *@s : input string
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
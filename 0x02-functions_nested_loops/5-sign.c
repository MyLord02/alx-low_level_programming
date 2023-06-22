#include "main.h"

/**
 * print_sign - check the sign of input.
 *@n:value to be inputed and checked.
 * Return: 0  for 0, return 1 for positive and -1 for negative .
 */
int print_sign(int n)
{

	if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(43);
		return (1);
	}

}

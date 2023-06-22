#include "main.h"

/**
 * print_last_digit - check the last digit
 *@n: inputed number to be checked
 * Return: Always 0.
 */

int print_last_digit(int n);
{
	int lastNumber;

	lastNumber = n % 10;
	if (lastNumber < 0)
	{
	lastNumber = lastNumber * -1;
	}
	_putchar(lastNumber);
	return (lastNumber);

}

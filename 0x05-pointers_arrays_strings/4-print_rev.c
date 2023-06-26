#include "main.h"

/**
 * print_rev -prints a string, in reverse, followed by a new line.
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int counter = 0;
	int counter2;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	s--;
	for (counter2 = counter; counter2 > 0; counter2--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\0');
}

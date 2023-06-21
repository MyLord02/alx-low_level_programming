#include "main.h"

/**
 * print_alphabet - printint out alphabets
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}


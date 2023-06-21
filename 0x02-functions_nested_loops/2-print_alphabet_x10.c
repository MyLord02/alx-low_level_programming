#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabets.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;

	for (int i = 1; i <= 10 ; i++)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}

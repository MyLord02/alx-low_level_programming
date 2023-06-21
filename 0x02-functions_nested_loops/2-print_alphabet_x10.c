#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
	char c;

	c = 'a';

	for (int i= 1; i <= 10 ; i++)
	{
	       	while(c <= 'z')
		{
		       	_putchar(c);
		       	c++;
		}
		_putchar('\n');
	}
     
}

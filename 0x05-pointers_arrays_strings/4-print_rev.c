#include "main.h"

/**
 * main - check the code
 *@s: string
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
	for (0 = counter; counter2 > 0; counter2--)
	{
		_putchar(*s);
		s--;
	}

	-putchar('\0');
}

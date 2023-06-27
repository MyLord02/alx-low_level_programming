#include "main.h"

/**
 * puts2 - function which prins one character
 *@str: input string
 * Return: output
 */
void puts2(char *str)
{
	int values = 0;
	char *new = str;
	int counter = 0;
	int counter2 = 0;

	while (*new != '\0')
	{
		new++;
		counter++;
	}
	values = counter - 1;
	for (counter2 = 0 ; counter2 <= values ; counter2++)
	{
		if (counter2 % 2 == 0)
	{
		_putchar(str[counter2]);
	}
	}
	_putchar('\n');
}

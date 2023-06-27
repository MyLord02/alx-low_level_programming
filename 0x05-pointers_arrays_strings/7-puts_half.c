#include "main.h"

/**
 * puts_half - prints half the string if computation is negative
 * @str: input
 * Return: half of the input
 */
void puts_half(char *str)
{
	int a;
	int b;
	int numberOf;

	numberOf = 0;

	for (a = 0; str[a] != '\0'; a++)
		numberOf++;

	b = (numberOf / 2);

	if ((numberOf % 2) == 1)
		b = ((numberOf +1)/2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

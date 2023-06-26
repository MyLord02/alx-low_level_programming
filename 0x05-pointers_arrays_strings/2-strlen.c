#include "main.h"
/**
 * _strlen- returns a lenght of a string
 * @s:string
 * Return: length the string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

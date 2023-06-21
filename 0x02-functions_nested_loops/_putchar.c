#include <unistd.h>

/**
 * _putchar writes the character c 
 * c The character to print 
 *  Return: Always 1 (Success)
 *  Error , returns -1,
 */

int _putchar(char c)
{
	return (write(1, &c , 1));

}


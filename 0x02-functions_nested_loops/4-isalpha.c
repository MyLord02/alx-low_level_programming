#include "main.h"

/**
 * _isalpha - check for alphabetic character.
 *@c: input to be checked.
 * Return: 1 if is an alphabet and if not, return 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

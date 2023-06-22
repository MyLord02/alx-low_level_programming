#include "main.h"

/**
 * _islower - checks for lower characters.
 *@c: character input to be checked.
 * Return:1 if true and 0 if false .
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

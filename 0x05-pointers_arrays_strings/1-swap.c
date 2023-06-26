#include "main.h"
/**
 *swap_int - swaps the values of two inputs.
 * @a: input to swap
 * @b: input to swap
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}


#include "main.h"

/**
 * _checker - returns the natural square root of a number.
 * @a: Integer
 * @b: Integer
 * Return: returns the natural square root
 */

int _checker(int a, int b)
{
if (b == 0 || b == 1)
{
return (b);
}

else if ((a * a) < b)
{
return (_checker(a + 1, b));
}
else if ((a * a) == b)
{
return (a);
}
return (-1);

}

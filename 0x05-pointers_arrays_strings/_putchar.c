#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout 
 * @c: The character to print
 * Return: 1 for success and -1 for error
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

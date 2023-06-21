#include <time.h>
#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;
	int m;

	m = 48;
	n = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

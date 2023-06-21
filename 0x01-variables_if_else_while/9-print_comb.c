#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 0;


	while (n < 10)
	{
		printf("%d", n);
		if (n < 9)
		{
			printf(", ");
		}
		n++;
	}
	printf("\n");
	return (0);
}

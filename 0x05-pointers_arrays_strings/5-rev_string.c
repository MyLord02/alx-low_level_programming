#include "main.h"

/** 
 * rev_string -  reverses a string
 * @s: input string 
 * Return: String
 */
void rev_string(char *s)
{
	char reversing = s[0];
	int counter = 0;
	int counter2 = 0;

	while (s[counter] != '\0')
	{
		counter++;
		for (counter2 = 0; counter2 < counter; counter2++)
		{
			counter--;
			reversing = s[counter2];
			s[counter2] = s[counter];
			s[counter] = reversing;
		}
	}
}


#include <stdio.h>
#include "main.h"

/**
  *main - prints its name, followed by a new line.
  *@argv : the string from the terminal
  *@argc : the number of arameters
  *Return: Always 0 (Success)
  */

int main(int argc, char const *argv[])
{
(void)argc;
printf("%s\n", *argv);
return (0);
}

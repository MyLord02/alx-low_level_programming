#include <stdio.h>
#include "main.h"

/**
  *main - prints all arguments it receives
  *@argv : the string from the terminal
  *@argc : the number of arameters
  *Return: 0
  */

int main(int argc, char const *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}

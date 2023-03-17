#include <stdio.h>

/**
  * main - entry point of the program
  *
  * Description: program that prints single digit numbers of base 10 from 0
  * Return: always 0 (success)
  */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("%s", "\n");
	return (0);
}

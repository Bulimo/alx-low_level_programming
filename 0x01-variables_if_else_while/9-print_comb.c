#include <stdio.h>

/**
  * main - the starting point of the program
  *
  * Description: Prints all possible combinations of single-digit numbers
  * Return: always 0 (success)
  */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
  * main - the starting point of the program
  *
  * Description: Prints all possible combinations of single-digit numbers
  * Return: always 0 (success)
  */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

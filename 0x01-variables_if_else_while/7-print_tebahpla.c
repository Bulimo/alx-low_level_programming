#include <stdio.h>

/**
  * main - starting point of the program
  *
  * Descrription: program prints lower case alphabet in reverse
  * Return: always 0 (success)
  */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
  * main - starting point of the program
  *
  * Description : Program prints single digot numbers of base 10 from 0
  * Return: always 0 (success)
  */

int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

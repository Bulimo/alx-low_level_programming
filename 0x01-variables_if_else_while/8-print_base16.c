#include <stdio.h>

/**
  * main - entry point of the program
  *
  * Description: program prints all the numbers of base 16 in lowercase
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

	ch = 'a';

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

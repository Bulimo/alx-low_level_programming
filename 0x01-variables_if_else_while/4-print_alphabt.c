#include <stdio.h>

/**
  * main - entry point of the program
  *
  * Description: program to print all the alphabet characters in lower case
  *	except the lwtters q & e
  * Return: always 0 (success)
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

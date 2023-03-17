#include <stdio.h>

/**
  * main - entry point of the program
  *
  * Description: program to print all the alphabet characters in lower case
  * Return: always 0 (success)
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}

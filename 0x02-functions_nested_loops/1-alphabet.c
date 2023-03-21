#include "main.h"

/**
  * main - is the entry point of the program
  *
  * Return: always 0 for success
  */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
  * print_alphabet - prints alphabet in lower case
  * Return: void
  */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}


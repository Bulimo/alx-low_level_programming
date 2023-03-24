#include "main.h"

/**
  * more_numbers - function that prints 10 times the numbers from 0-14
  * Return: void
  */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}


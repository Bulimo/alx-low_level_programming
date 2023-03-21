#include "main.h"

/**
  * times_table - prints the 9 times table starting with 0
  * Return: void
  */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int product = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = i * j;
			if (product > 9)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + product);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}




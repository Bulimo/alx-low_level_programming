#include "main.h"
/**
  * print_times_table - priints the n times table starting with 0
  *	if n > 15 or n < 0 the function should not print
  * @n: the size of the times table
  * Return: void
  */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i;
		int j;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				if ((i * j) > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (i * j) / 100);
					_putchar('0' + ((i * j) % 100) / 10);
					_putchar('0' + (i * j) % 10);
				}
				else if ((i * j) > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + ((i * j) / 10));
					_putchar('0' + ((i * j) % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					 _putchar(' ');
					_putchar('0' + (i * j));
				}
			}
		_putchar('\n');
		}
	}
}


#include "main.h"
#include <stdio.h>

/**
  * print_number - function that prints an integer
  * @n: integer to print
  * Return: void
  */
void print_number(int n)
{
	int rev_n = 0;			/* Store the reversed number */
	int mod = 0;			/* stores the extracted number */

	if (n == 0)			/* check if number is -ve */
		_putchar('0' + mod);
	else
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		while (n > 0)
		{
			mod = n % 10;
			rev_n = (rev_n * 10) + mod;
			n /= 10;
		}
		/* Print out the reversed number */
		while (rev_n > 0)
		{
			mod = rev_n % 10;
			rev_n /= 10;
			_putchar('0' + mod);
		}
	}
}

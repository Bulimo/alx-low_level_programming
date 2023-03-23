#include "main.h"
#include <stdio.h>

/**
  * print_number - function that prints an integer
  * @n: integer to print
  * Return: void
  */
void print_number(int n)
{
	char neg = '+';			/* check for negative number */
	int mod = 0;			/* extract the last digit */
	int rev_n = 0;			/* Store the reversed number */

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)			/* check if number is -ve */
		{
			neg = '-';
			n *= -1;		/* make the number positive */
		}
		while (n > 0)
		{
			mod = n % 10;
			rev_n = (rev_n * 10) + mod;
			n /= 10;
		}
		/* Print out the reversed number */
		if (neg == '-')
			_putchar('-');
		while (rev_n > 0)
		{
			mod = rev_n % 10;
			rev_n /= 10;
			_putchar('0' + mod);
		}
	}
}

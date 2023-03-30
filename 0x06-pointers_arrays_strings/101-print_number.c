#include "main.h"

/**
  * print_number - function prints an integer
  * @n: number to be printed
  * Return: void
  */
void print_number(int n)
{
	unsigned int num = 0;			/* holds the tens multiples of n */
	unsigned int quotient = 0;		/* holds the division of n by num */
	unsigned int n1 = n;			/* holds a copy of n */
	double size = 1.0;				/* to get the size of largest int */

	/* check for -ve number */
	if (n < 0)
	{
		n1 *= -1;
		_putchar('-');
	}

	/* Get the size of the int */
	while (size <= n1)
		size *= 10;
	num = size / 10;

	/* print out the numbers */
	if (num)
	{
		while (num >= 1)
		{
			quotient = n1 / num;
			_putchar('0' + quotient);
			n1 -= (quotient * num);
			num /= 10;
		}
	}
	else
		_putchar('0' + quotient);
}

#include "main.h"

/**
  * print_number - function that prints an integer
  * @n: integer to print
  * Return: void
  */
void print_number(int n)
{
	double rev_n = 1;			/* Store the reversed number */
	unsigned int mod = 0;			/* stores the extracted number */
	unsigned int num = n;
	unsigned int rem = 0;

	if (n == 0)			/* check if number is -ve */
		_putchar('0' + mod);
	else
	{
		if (n < 0)
		{
			num *= -1;
			_putchar('-');
		}
		while (rev_n <= num)
			rev_n *= 10;
		rem = rev_n / 10;

		/* Print out the reversed number */
		while (rem >= 1)
		{
			mod = num / rem;
			_putchar('0' + mod);
			num = num - (mod * rem);
			rem /= 10;
		}
	}
}

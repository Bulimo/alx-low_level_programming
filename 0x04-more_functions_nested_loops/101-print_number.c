#include "main.h"

/**
  * print_number - function that prints an integer
  * @n: integer to print
  * Return: void
  */
void print_number(int n)
{
	unsigned int rev_n = 1;			/* Store the reversed number */
	unsigned int mod = 0;			/* stores the extracted number */
	unsigned int num = n;

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
		rev_n /= 10;

		/* Print out the reversed number */
		while (rev_n >= 1)
		{
			mod = num / rev_n;
			_putchar('0' + mod);
			num = num - (mod * rev_n);
			rev_n /= 10;
		}
	}
}

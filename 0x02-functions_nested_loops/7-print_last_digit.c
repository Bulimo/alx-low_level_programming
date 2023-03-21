#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  * @n: holds the number from which we get the last digit
  * Return: the last digit of the number
  */
int print_last_digit(int n)
{
	int mod = 0;

	if (n >= 0)
	{
		mod = n % 10;
		_putchar('0' + mod);
		return (mod);
	}
	else
	{
		mod = (-1 * n) % 10;
		_putchar('0' + mod);
		return (mod);
	}
}

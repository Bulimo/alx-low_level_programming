#include "main.h"

/**
  * is_prime_number - checks whether a number is a prime number
  * @n: number to check
  * Return: 1 if prime number, otherwise 0
  */
int is_prime_number(int n)
{
	int x = 3;				/* checks a factor of n */

	if (n == 2)
		return (1);
	if ((n <= 1) || (n % 2 == 0))
		return (0);
	return (check_factors(n, x));
}

/**
  * check_factors - checks for prime factors of a number
  * @n: number to check for prime factors
  * @x: number to check if it is a prime
  * Return: 1 if no factor found, otherwise 0
  */
int check_factors(int n, int x)
{
	if (!(n % x))
		return (0);
	if (x >= (n / 2))
		return (1);
	return (check_factors(n, x + 3));
}


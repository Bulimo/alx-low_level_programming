#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: number to find the square root
  * Return: int square root of n
  */
int _sqrt_recursion(int n)
{
	int x = 1;				/* possible square root of n */

	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_get(n, x + 1));
}

/**
  * sqrt_get - calculate the square root
  * @n: number to find square root
  * @x: number to test if is a square root
  * Return: found square root of -1
  */
int sqrt_get(int n, int x)
{
	if (x >= (n / 2))
		return (-1);
	if ((x * x) == n)
		return (x);
	return (sqrt_get(n, x + 1));
}

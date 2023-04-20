#include "variadic_functions.h"

/**
  * sum_them_all - function that sums all parameters
  * @n: the 1st number to be summed
  * Return: int sum of parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list parg;				/* pointer for variable argument list */
	unsigned int i = 0;			/* argument list counter */

	if (n <= 0)
		return (0);
	va_start(parg, n);			/* initialize the argument pointer */

	for (i = 0; i < n; i++)
		sum += va_arg(parg, int);

	va_end(parg);				/* end variable argument pointer process */

	return (sum);
}

#include <stdio.h>

/**
  * main - starting point of the program
  * Description: program that finds and prints largest
  *	prime factor of 612852475143
  * Return: 0 when successful
  */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int prime = 0;			/* stores found prime factor */
	unsigned long int largest_prime = 0;		/* Stores the largest prime found */
	unsigned long int i = 0;			/* divisor */
	int found_prime = 0;				/* check if we have found prime factor */

	while (num > 1)
	{
		i = 2;
		while (found_prime == 0)
		{
			if ((num % i) == 0)
			{
				found_prime = 1;
				prime = i;
				num /= i;
			}
			i++;
		}

		if (prime > largest_prime)
			largest_prime = prime;

		found_prime = 0;
	}
	printf("%lu\n", largest_prime);
	return (0);
}

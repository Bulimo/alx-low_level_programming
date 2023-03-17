#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the program entry point
 *
 * Description : program assigns a random number to n checks for the last digit
 *	of n if it is 0, greater than 5, 0 or less than 6.
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if (n % 10 <= 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, n % 10);
	else
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 10);
	return (0);
}

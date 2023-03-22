#include <stdio.h>
#include <stdbool.h>

/**
  * main - entry point of the program
  * Description: prints the sum of all the multiples of 3 or 5 below 1024
  * Return: always 0 for success
  */
int main(void)
{
	int sum = 0;
	int i;
	bool stop = false;

	for (i = 1; !stop; i++)
	{
		if ((3 * i) < 1024)
		{
			sum += 3 * i;
		}
		else
			stop = true;
		if ((5 * i) < 1024 && ((5 * i) % 3) != 0)
		{
			sum += 5 * i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

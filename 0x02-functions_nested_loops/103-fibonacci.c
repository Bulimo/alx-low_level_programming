#include <stdio.h>

/**
  * main - starting point of the program
  * Description: prints the sum of all even Fibonnacci numbers whose value is 
  *	less than 4,000.000
  * Return: 0 for success
  */
int main(void)
{
	unsigned long int prev = 0;
	unsigned long int current = 1;
	unsigned long int next = 0;
	unsigned long int sum = 0;
	int i = 0;

	for (i = 0; i < 50; i++)
	{
		next = current + prev;
		prev = current;
		current = next;
		if (next <= 4000000)
		{
			if (next % 2 == 0)
				sum += next;
		}
		else
			break;
	}
	printf("%lu\n", sum);
	return (0);
}


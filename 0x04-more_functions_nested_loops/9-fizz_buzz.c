#include <stdio.h>

/**
  * main - start point of the program
  * Description: program prints numbers from 1-100 replacing multiples
  *	of 3 by Fizz and of 5 by Buzz
  * Return: 0 for success
  */
int main(void)
{
	int i = 0;
	int size = 100;

	for (i = 1; i <= size; i++)
	{
		if (i > 1)
			printf("%s", " ");

		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", "FizzBuzz");
		else if ((i % 3) == 0)
			printf("%s", "Fizz");
		else if ((i % 5) == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
	}
	printf("%s", "\n");
	return (0);
}

#include <stdio.h>

/**
  * main - starting point of the program
  * Description: prints the first 98 Fibonnacci numbers
  * Return: 0 for success
  */
int main(void)
{
	long double prev = 0.0;
	long double current = 1.0;
	long double next = 0.0;
	int i = 0;

	for (i = 0; i < 98; i++)
	{
		next = current + prev;
		if (i == 97)
			printf("%.0Lf", next);
		else
		{
			printf("%.0Lf, ", next);
			prev = current;
			current = next;
		}
	}
	printf("%s", "\n");
	return (0);
}


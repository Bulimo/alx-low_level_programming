#include <stdio.h>

/**
  * main - starting point of the program
  * Description: prints the first 50 Fibonnacci numbers
  * Return: 0 for success
  */
int main(void)
{
	unsigned int prev = 0;
	unsigned int current = 1;
	unsigned int next = 0;
	int i = 0;

	for (i = 0; i < 50; i++)
	{
		next = current + prev;
		if (i == 49)
			printf("%u", next);
		else
		{
			printf("%u, ", next);
			prev = current;
			current = next;
		}
	}
	printf("%s", "\n");
	return (0);
}


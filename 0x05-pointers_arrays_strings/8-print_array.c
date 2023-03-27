#include <stdio.h>

/**
  * print_array - function to print n elements of an array of integers
  * @a: array of integers
  * @n: the number of elements of array to be printed
  * Return: void
  */
void print_array(int *a, int n)
{
	int i = 0;				/* loop counter */

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	printf("%s", "\n");
}


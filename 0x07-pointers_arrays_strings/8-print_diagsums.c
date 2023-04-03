#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - function to print sum of array diagonals
  * @a: array to print diagonals sum
  * @size: size of the array
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int sum = 0;				/* hold the sum of diagonals */
	int j = 0;							/* columns counter */
	int i = 0;							/* rows counter */

	for (i = 0, j = 0; (i < size && j < size); i++, j++)
	{
		sum = sum + a[(i * size) + j];
	}
	printf("%d, ", sum);

	sum = 0;
	for (i = 0, j = size - 1; (i < size && j >= 0); i++, j--)
	{
		sum = sum + a[(i * size) + j];
	}
	printf("%d\n", sum);
}

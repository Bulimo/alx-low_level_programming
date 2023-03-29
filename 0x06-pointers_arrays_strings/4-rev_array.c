#include "main.h"

/**
  * reverse_array - function to reverse content of an array of int
  * @a: the array to be reversed
  * @n: the length of the array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int i = 0;			/* count elements from index 0 */
	int j = n - 1;		/* count elements from index n - 1 */
	int temp = 0;		/* hold temporary value during swap */

	for (; i < (n / 2); i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

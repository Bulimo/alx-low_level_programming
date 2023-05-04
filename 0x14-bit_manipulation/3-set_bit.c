#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at an index
  * @n: address of the number to set its bit
  * @index: the position of the bit in n
  * Return: 1 if SUCCESSFUL. -1 otherwise
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = 0;
	unsigned long int mask = 1;

	if (n == NULL)
		return (-1);
	bits = sizeof(unsigned long int) * 8;
	if (index <= bits)
	{
		mask = mask << index;
		*n = *n | mask;
		return (1);
	}
	return (-1);
}

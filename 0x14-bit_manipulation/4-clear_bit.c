#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 ata ana index
  * @n: address of the number to clear bit
  * @index: position of the bit to be cleared in n
  * Return: 1 if SUCCESSFUL, -1 otherwise
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = 0, i = 0;
	unsigned long int mask = 1;

	if (n == NULL)
		return (-1);
	bits = sizeof(unsigned long int) * 8;
	if (index <= bits)
	{
		for (i = 0; i < bits; i++)
		{
			mask = mask << 1;
			if ((bits - i - 1) != index)
				mask = mask | 1;
		}
		*n = *n & mask;
		return (1);
	}
	return (-1);
}


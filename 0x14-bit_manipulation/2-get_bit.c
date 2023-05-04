#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: number to check for the bit
  * @index: position of the bit to be checked in n
  * Return: the value of the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = 0;

	if (n == 0)
		return (0);
	bits = sizeof(unsigned long int) * 8;
	if (index <= bits)
		return ((n >> index) & 1);

	return (-1);
}

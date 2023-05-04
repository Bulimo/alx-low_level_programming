#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: number to check for the bit
  * @index: position of the bit to be checked in n
  * Return: the value of the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1;
	unsigned int i = 0;

	if (index > 0)
	{
		for (i = 0; i < index; i++)
			num *= 2;
		if (num > n)
			return (-1);
		return (n & num ? 1 : 0);
	}
	if (index == 0)
		return (n & 1 ? 1 : 0);
	return (-1);
}

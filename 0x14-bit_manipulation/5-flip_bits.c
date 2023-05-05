#include "main.h"

/**
  * flip_bits - returns the number of bits to flip to get to another number
  * @n: original number
  * @m: the new number after flipp
  * Return: number of bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new = 0;
	int count = 0;

	new = n ^ m;
	for (count = 0; new != 0; new >>= 1)
	{
		if (new & 01)
			count++;
	}

	return (count);
}

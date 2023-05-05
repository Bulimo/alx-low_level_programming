#include "main.h"

/**
  * get_endianness - checks the endianness
  *
  * Return: 1 if small endian, 0 if big endian
  */
int get_endianness(void)
{
	unsigned int num = 0x1210;
	char *pchar = (char *)&num;
	unsigned int n = 0;

	n = (int)*pchar;
	if (n == (num & 0xFF))
		return (1);
	return (0);
}

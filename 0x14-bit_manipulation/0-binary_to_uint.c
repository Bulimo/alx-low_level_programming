#include "main.h"

/**
  * binary_to_uint - converts binary number to unsigned uint
  * @b: pointer to string of binary number
  * Return: converted unsigned int number
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0, j = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	if (len == 0)
		return (0);
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += ((b[i] == '0') ? (0 * _pow(2, j)) : (1 * _pow(2, j)));
	}
	return (num);
}

/**
  * _strlen - returns the length of the string passed
  * @s: the sting to find the length
  * Return: int length of string
  */
int _strlen(const char *s)
{
	int len = 0;			/* store string length */
	int i = 0;				/* loop counter */

	if (s != NULL)
	{

		while (*(s + i++))
			len++;
	}
	return (len);
}

/**
  * _pow - calculates the result of x raised to y
  * @x: the base number
  * @y: the power by which x is raised
  * Return: result of x raised to y
  */
unsigned int _pow(int x, int y)
{
	int i = 0;
	unsigned int result = 1;

	for (i = 0; i < y; i++)
		result *= x;
	return (result);
}

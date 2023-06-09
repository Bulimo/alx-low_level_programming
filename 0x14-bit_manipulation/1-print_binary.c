#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: number to print its binary
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar('0' + (n & 0x1));

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

#include "3-calc.h"

/**
  * op_add - returns sum of 2 int
  * @a: 1st int
  * @b: 2nd int
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}


/**
  * op_sub - returns difference of 2 int
  * @a: 1st int
  * @b: 2nd int
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns product of 2 int
  * @a: 1st int
  * @b: 2nd int
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns quotient of 2 int
  * @a: 1st int
  * @b: 2nd int
  * Return: quotient
  */
int op_div(int a, int b)
{
	if (b <= 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - returns modulus of a divided by b
  * @a: 1st int
  * @b: 2nd int
  * Return: modulus
  */
int op_mod(int a, int b)
{
	if (b <= 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}


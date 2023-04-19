#include "3-calc.h"

/**
  * main - starting point of the program
  * @argc: number of arguments
  * @argv: array of string arguments to the program
  * Return: 0 if SUCCESS, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	int (*pfun)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	pfun = get_op_func(argv[2]);
	if (pfun == NULL)
	{
		puts("Error");
		exit(99);
	}

	result = pfun(num1, num2);
	printf("%d\n", result);
	return (0);
}

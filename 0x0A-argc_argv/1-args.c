#include "main.h"

/**
  * main - starting point of the program
  * @argc: number of arguments passed
  * @argv: pointer to array of string arguments
  * Description: prints number of arguments supplied to program
  * Return: 0 if successful, 1 otherwise
  */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

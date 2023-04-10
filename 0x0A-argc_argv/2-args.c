#include "main.h"

/**
  * main - starting point of the program
  * @argc: number of arguments passed
  * @argv: pointer to array of string arguments
  * Description: lists all arguments supplied to the program
  * Return: 0 if successful, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

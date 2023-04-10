#include "main.h"

/**
  * main - starting point of the program
  * @argc: number of arguments passed
  * @argv: pointer to array of string arguments
  * Description: prints the product of 2 numbers supplied
  * Return: 0 if successful, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int x = 0;				/* first number */
	int y = 0;				/* second number */

	if (argc >= 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
		printf("%s\n", "Error");

	return (0);
}

#include <stdio.h>

/**
  * main - entry point of the program
  * @argc: the number of variables passed to main
  * @argv: pointer to array string of variables
  * Description: print the name of the program
  * Return: 1 if successful, 0 otherwise
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

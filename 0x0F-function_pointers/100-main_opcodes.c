#include "function_pointers.h"
#include <stdio.h>

/**
  * main - starting point of the program
  * @argc: number of arguments supplied to program
  * @argv: pointer to string array of arguments
  * Return: 0 on SUCCESS, 1 otherwise
  */
int main(int argc, char **argv)
{
	int number_of_bytes = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		puts("Error");
		return (2);
	}
	print_opcode((char *)main, number_of_bytes);

	return (0);
}

/**
  * print_opcode - prints the opcodes
  * @address: pointer to starting address
  * @number_of_bytes: number of bytes to print from address
  * Return: nothing;
  */
void print_opcode(char *address, int number_of_bytes)
{
	int i = 0;

	if (address != NULL && number_of_bytes > 0)
	{
		for (i = 0; i < number_of_bytes; i++)
		{
			if (address[i] == 0xcc || address[i] == 0x00)
				return;
			if (i == 0)
				printf("%02hhx", address[i]);
			else
				printf(" %02hhx", address[i]);
		}
		printf("%s", "\n");
	}
}

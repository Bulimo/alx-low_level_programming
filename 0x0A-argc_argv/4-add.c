#include "main.h"

/**
  * main - starting point of the program
  * @argc: number of arguments passed
  * @argv: pointer to array of string arguments
  * Description: prints the product of 2 numbers supplied
  * Return: 1 if successful, 0 otherwise
  */
int main(int argc, char *argv[])
{
	int sum = 0;				/* store the sum of numbers */
	int i = 0;					/* argc loop counter */
	int j = 0;					/* iterate over argv characters */

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			if (!(isdigit(*(argv[i] + j))))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

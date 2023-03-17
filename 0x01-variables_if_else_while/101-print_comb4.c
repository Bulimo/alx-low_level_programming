#include <stdio.h>

/**
  * main - starting point of the program
  *
  * Description: program that prints all different combination of 2-digit num
  * Return: must be 0 for successful run
  */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		int j = i + 1;

		while (j <= 57)
		{
			int k = j + 1;

			while (k <= 57)
			{

				putchar(i);
				putchar(j);
				putchar(k);

				if ((i < 55) && (j <= 57) && (k <= 57))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

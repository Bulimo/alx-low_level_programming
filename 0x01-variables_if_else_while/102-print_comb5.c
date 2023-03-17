#include <stdio.h>

/**
  * main - starting point of the pprogram
  *
  * Description: program that prints all possible combinations of two
  *	two-digit numbers
  * Return: always 0 for successful run
  */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		int j = 48;

		while (j < 57)
		{
			int k = i;

			while (k <= 57)
			{
				int l;

				if (j == 57)
					l = 48;
				else
					l = j + 1;
				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (j < 56)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
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

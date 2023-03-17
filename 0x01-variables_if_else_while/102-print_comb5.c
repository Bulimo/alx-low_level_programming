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
	int i = '0';
	int j;
	int k;
	int l;

	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = i;
			l = j + 1;
			while (k <= '9')
			{
				if (l == '0')
					l = '0';
				while (l <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!((i == '9' && j == '8') && (k == '9' && l == '9')))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				l = '0';
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

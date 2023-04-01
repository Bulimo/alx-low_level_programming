#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
  * print_buffer - function that prints a buffer
  * @b: pointer to the buffer
  * @size: number of bytes of the pointer to be printed
  * Return: void
  */
void print_buffer(char *b, int size)
{
	char str[11];				/* hold ten bytes of the buffer */
	int i = 0;					/* loop counter for b */
	int j = 0;					/* loop counter for str */

	if (size <= 0)
		puts("");
	else
	{
		while (i <= size)
		{
			if (i % 10 == 0 || i == size)
			{
				if (i != 0)
				{
					str[j] = '\0';
					printf("%s\n", str);
					if (i == size)
						break;
				}
				printf("%010x: ", b[i]);
				j = 0;
			}
			str[j++] = (!isprint(b[i])) ? '.' : b[i];
			printf("%02x", b[i]);
			if (i % 2 == 1)
				printf("%s", " ");
			i++;
			if (i == size && j < 9)
			{
				for (; j <= 9; j++)
				{
					printf("%s", "  ");
					str[j] = ' ';
				}
				printf("%s", "  ");
			}
		}
	}
}

#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <inttypes.h>

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
	int k = 0;					/* difference between j and 10 */

	if (size <= 0)
		printf("%s", "\n");
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
				printf("%8lx: ", (uintptr_t)&b[i]);
				j = 0;
			}
			str[j++] = (!isprint(b[i])) ? '.' : b[i];
			printf("%02x", b[i]);
			if (i % 2 == 1)
				printf("%s", " ");
			i++;
			if (i == size && j < 9)
			{
				k = 9 - j;
				for (; k >= 0; k--)
				{
					printf("%s", "  ");
					if (k % 2 == 0)
						printf("%s", " ");
				}
			}
		}
	}
}

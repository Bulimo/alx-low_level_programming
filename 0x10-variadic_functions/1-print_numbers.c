#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - prints numbers passed as parameters
  * @separator: number separator during printing
  * @n: number of parameters
  * Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list parg;						/* pointer to variable argument list */
	int value = 0;

	if (n > 0)
	{
		va_start(parg, n);
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
			value = va_arg(parg, int);
			printf("%d", value);
		}
		va_end(parg);
	}
	printf("%s", "\n");
}


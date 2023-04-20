#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - prints strings passed as parameters
  * @separator: string separator
  * @n: number of parameters passed
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;					/* counter */
	va_list parg;						/* pointer for variable argument list */
	char *str = NULL;

	if (n > 0)
	{
		va_start(parg, n);				/* initialize the variable argument pointer */

		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
			str = va_arg(parg, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);
		}
	printf("%s", "\n");
	}
}

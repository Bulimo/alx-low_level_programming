#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_all - prints any type of argument passed
  * @format: determines type of argument passed to function
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	int i = 0;					/* format counter */
	char *str_val = NULL;
	va_list parg;

	va_start(parg, format);
	while (format[i] != '\0' && format != NULL)
	{
		if (i != 0 && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			printf("%s", ", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(parg, int));
				break;
			case 'i':
				printf("%d", va_arg(parg, int));
				break;
			case 'f':
				printf("%f", va_arg(parg, double));
				break;
			case 's':
				str_val = va_arg(parg, char *);
				if (str_val == NULL)
					printf("%s", "(nil)");
				while (str_val != NULL)
				{
					printf("%s", str_val);
					break;
				}
				break;
			default:
				break;
		}
		i++;
	}
	va_end(parg);
	printf("%s", "\n");
}

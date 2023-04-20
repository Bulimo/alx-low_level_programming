#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_all - prints any type of argument passed
  * @format: determines type of argument passed to function
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	int i = 0, print_separator = 0;
	char *str_val = NULL, *separator = "";
	va_list parg;

	va_start(parg, format);
	while (format != NULL && format[i] != '\0')
	{
		print_separator = 0;
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(parg, int));
				print_separator = 1;
				break;
			case 'i':
				printf("%s%d", separator, va_arg(parg, int));
				print_separator = 1;
				break;
			case 'f':
				printf("%s%f", separator, va_arg(parg, double));
				print_separator = 1;
				break;
			case 's':
				str_val = va_arg(parg, char *);
				if (str_val == NULL)
				{
					printf("%s%s", separator, "(nil)");
					print_separator = 1;
					break;
				}
				printf("%s%s", separator, str_val);
				print_separator = 1;
				break;
		}
		i++;
		if (print_separator)
		separator = ", ";
	}
	va_end(parg);
	printf("%s", "\n");
}

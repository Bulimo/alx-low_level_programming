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
	int j = 0;
	va_list parg;
	char *separator = "";
	struct data_types my_data[] = {
									{'c', print_char},
									{'i', print_int},
									{'f', print_float},
									{'s', print_string},
									{'\0', NULL}
								};

	va_start(parg, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (my_data[j].type != '\0')
		{
			if (my_data[j].type == format[i])
			{
				printf("%s", separator);
				my_data[j].func(parg);
			}
			j++;
		}
		separator = ", ";
		i++;
	}
	va_end(parg);
	printf("%s", "\n");
}

/**
 * print_char - prints char
 * @parg: pointer to variable argument list
 * Return: nothing
 */
void print_char(va_list parg)
{
	printf("%c", va_arg(parg, int));
}

/**
 * print_int - prints int
 * @parg: pointer to variable argument list
 * Return: nothing
 */
void print_int(va_list parg)
{
	printf("%d", va_arg(parg, int));
}

/**
 * print_float - prints float
 * @parg: pointer to variable argument list
 * Return: nothing
 */
void print_float(va_list parg)
{
	printf("%f", va_arg(parg, double));
}

/**
 * print_string - prints string
 * @parg: pointer to variable argument list
 * Return: nothing
 */
void print_string(va_list parg)
{
	char *s;

	s = va_arg(parg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

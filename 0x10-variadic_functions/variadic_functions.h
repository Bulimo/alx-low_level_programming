#ifndef VARIADIC_FUNCTIONS_H_INCLUDED
#define VARIADIC_FUNCTIONS_H_INCLUDED

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct dt - struct
 * @letter: letter signifying data type
 * @func: function ptr
 */
typedef struct dt
{
	char letter;
	void (*func)(va_list);
} datatype;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

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
struct data_types
{
	char type;
	void (*func)(va_list);
};

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list parg);
void print_int(va_list parg);
void print_float(va_list parg);
void print_string(va_list parg);

#endif

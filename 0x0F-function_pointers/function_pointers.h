#ifndef FUNCTION_POINTERS_H_INCLUDED
#define FUNCTION_POINTERS_H_INCLUDED

#include <unistd.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif

#ifndef FUNCTION_POINTERS_H_INCLUDED
#define FUNCTION_POINTERS_H_INCLUDED

#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void print_opcode(char *address, int number_of_bytes);

#endif

#include "function_pointers.h"

/**
  * print_name - function that aprints a name
  * @name: string to be printed
  * @f: function pointer that takes in a string
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

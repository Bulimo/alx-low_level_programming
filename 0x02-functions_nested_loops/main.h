#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
  * times_table - prints the 9 times table starting with 0
  * Return: void
  */
void times_table(void);

/**
  * add - adds two integers and returns the result
  * @x: holds first integer to be summed
  * @y: holds second integer to be summed
  * Return: reuslt of addition
  */
int add(int x, int y);
#endif

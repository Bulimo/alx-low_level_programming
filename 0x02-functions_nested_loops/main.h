#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>

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
  * print_times_table - priints the n times table starting with 0
  *	if n > 15 or n < 0 the function should not print
  * @n: the size of the times table
  * Return: void
  */
void print_times_table(int n);
#endif

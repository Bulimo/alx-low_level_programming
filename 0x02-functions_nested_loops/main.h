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
  * print_sign - prints the sign of a number
  * @n: holds the number to be checked
  * Return: 1 if number is greater than 0
  *	0 if number is zero and -1 if number is less than 0
  */
int print_sign(int n);
#endif

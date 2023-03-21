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
  * print_alphabet - prints alphabet in lower case
  *
  * Return: void
  */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar("\n");
}
#endif
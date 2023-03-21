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
  * Return: void
  */
void print_alphabet(void);

/**
  * print_alphabet_x10 - prints 10 times the alphabets in lowercase
  * Return: void
  */
void print_alphabet_x10(void);

/**
  * _islower - checks for lower case characters
  * @c: int character code to be checked
  * Return: 1 if lowercase and 0 if otherwise
  */
int _islower(int c);

/**
  * _isalpha - checks for alphabet characters
  * @c: int characte to be checked if alphabet
  * Return: 1 if alphabet and 0 if otherwise
  */
int _isalpha(int c);
#endif

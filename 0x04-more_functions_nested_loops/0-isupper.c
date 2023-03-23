#include "main.h"

/**
  * _isupper - checks for uppercase character
  * @c: holds the integer code for the character to be checked
  * Return: 1 if uppercase & 0 if otherwise
  */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}

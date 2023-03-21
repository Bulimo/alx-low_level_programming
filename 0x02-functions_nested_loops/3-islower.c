#include "main.h"

/**
  * _islower - checks if character is lowercase
  * @c: int character code to be checked
  * Return: 1 if lowercase and 0 otherwise
  */
int _islower(int c)
{
	if ((c <= 'z') && (c >= 97))
		return (1);
	else
		return (0);
}

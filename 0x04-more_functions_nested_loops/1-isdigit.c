#include "main.h"

/**
  * _isdigit - function that checks for a digit 0-9
  * @c: holds int code for the character to be checked
  * Return: 1 if between 0-9 and 0 otherwise
  */
int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

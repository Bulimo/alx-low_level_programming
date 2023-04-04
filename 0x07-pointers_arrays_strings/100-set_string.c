#include "main.h"

/**
  * set_string - function sets the value of a pointer to a char
  * @s: pointer to source string
  * @to: pointer to sting to be set
  * Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}

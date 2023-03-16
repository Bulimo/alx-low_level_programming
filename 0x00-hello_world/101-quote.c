#include <string.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Description: Prints a line without using the functions puts and printf or
 * their associated functions
 * Return: returns 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

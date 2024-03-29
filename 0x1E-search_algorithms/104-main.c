#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		2, 2, 2, 2, 3, 3, 3, 4, 5, 5, 6, 7, 7};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
	printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
	printf("Found %d at index: %d\n\n", 2, advanced_binary(array, size, 2));
	printf("Found %d at index: %d\n\n", 3, advanced_binary(array, size, 3));
	printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));
	return (EXIT_SUCCESS);
}

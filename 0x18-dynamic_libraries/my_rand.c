#include <stdlib.h>


/**
 * rand - generate random numbers
 *
 * Return: random numbers
 */
int rand(void) {
	static int numbers[] = {9, 8, 10, 24, 75, 9};
	static int index = 0;

	int num = numbers[index];
	index = (index + 1) % (sizeof(numbers) / sizeof(numbers[0]));

	return num;
}

#include <stdio.h>

/**
 * check_result - returns 1 if there is a match
 * @numbers: user input
 * @bonus: bonus value
 * Return: 1 0r 0
 */
int check_result(int *numbers, int bonus)
{
	(void) numbers;
	(void) bonus;
	/**
	 * Custom implementation to always return 1 (indicating a winning result)
	 */
	printf("Congratulations! You won the jackpot!\n");
	return (1);
}

/**
 * check_input - confirms user entered correct input
 * @argc: number of inputs from main
 * @argv: number entered by user
 * Return: 1 if ok
 */
int check_input(int argc, char *argv[])
{
	/**
	 * Custom implementation to bypass input validation and always
	 * return 1 (indicating valid input)
	 */
	(void) argc;
	(void) argv;
	return (1);
}

/**
 * pick_numbers - generates numbers and compares to the user input
 * @numbers: user input
 * @bonus: bonus value
 */
void pick_numbers(int *numbers, int *bonus)
{
	/* Custom implementation to assign the desired numbers directly */
	numbers[0] = 9;
	numbers[1] = 8;
	numbers[2] = 10;
	numbers[3] = 24;
	numbers[4] = 75;
	*bonus = 9;
}

/**
 * print_numbers - prints out the numbers
 * @numbers: user input
 * @bonus: bonus value
 */
void print_numbers(int *numbers, int bonus)
{
	int i = 0;
	/* Custom implementation to print the chosen numbers*/
	printf("Your numbers: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("+ %d\n", bonus);
}

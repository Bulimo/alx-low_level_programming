#include "main.h"

/**
  * main - starting point of the program
  * @argc: numer of arguments passed
  * @argv: pointer to array of string arguments
  * Description: returns te number of coins to make change
  * Return: 0 if success, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int change = 0;				/* Store the user amount */
	int coin_count = 0;			/* store the count of coins */
	int coin_25 = 25, coin_10 = 10, coin_5 = 5, coin_2 = 2;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	change = atoi(argv[argc - 1]);
	if (change > 0)
	{
		if (change / coin_25)
		{
			coin_count += change / coin_25;
			change %= coin_25;
		}
		if (change / coin_10)
		{
			coin_count += change / coin_10;
			change %= coin_10;
		}
		if (change / coin_5)
		{
			coin_count += change / coin_5;
			change %= coin_5;
		}
		if (change / coin_2)
		{
			coin_count += change / coin_2;
			change %= coin_2;
		}
		coin_count += change;
	}
	printf("%d\n", coin_count);
	return (0);
}

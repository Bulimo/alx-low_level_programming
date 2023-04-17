#include "main.h"

/**
  * main - start of the program
  * @argc: number of arguments
  * @argv: pointer to array string of arguments
  * Description: adds an arbitrary length of 2 positive strings
  * Return: 0 on SUCCESS, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int *result = NULL;
	int len1, len2;

	if  (argc != 3)
	{
		puts("Error");
		exit(98);
	}

	/* check if the numbers are digits only */
	if (!(check_if_digit(argv[1])) || !(check_if_digit(argv[2])))
	{
		puts("Error");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	result = multiplication(argv[1], argv[2]);
	print_result(result, len1 + len2);
	free(result);
	return (0);
}

/**
  *multiplication - gives produuct of two numbers
  * @s1: first number
  * @s2: second number
  * Return: pointer to the product, NULL otherwise
  */
int *multiplication(char *s1, char *s2)
{
	int *result = NULL;
	int len1 = 0, len2 = 0;
	int carry = 0;
	int i = 0, j = 0;
	int product = 0;

	/* get string lengths */
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
	{
		puts("Error");
		exit(98);
	}
	for (i = 0; i < (len1 + len2); i++)
		result[i] = 0;

	/* multiply starting from the last digit */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (s1[i] - '0') * (s2[j] - '0');
			product += (carry + result[i + j + 1]);
			if (product > 9)
			{
				carry = product / 10;
				product %= 10;
			}
			else
				carry = 0;
			result[i + j + 1] = product;
		}
	}
	return (result);
}

/**
  * print_result - prints an array
  * @result: array to be printed
  * @len: length of the array
  * Return: void
  */
void print_result(int *result, int len)
{
	int i = 0;

	for (i = 0; i < len && result[i] == 0; i++)
		;

	if (i == len)
		printf("%d", 0);
	for (; i < len; i++)
		printf("%d", result[i]);
	printf("%s", "\n");
}

/**
  * check_if_digit - checks if characters of string are digits
  * @str: string to be checked
  * Return: 1, 0 otherwise
  */
int check_if_digit(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	return (1);
}

/**
  * _strlen - returns the length of the string passed
  * @s: the sting to find the length
  * Return: int length of string
  */
int _strlen(char *s)
{
	int len = 0;			/* store string length */
	int i = 0;				/* loop counter */

	if (s != NULL)
	{

		while (*(s + i++))
			len++;
	}
	return (len);
}

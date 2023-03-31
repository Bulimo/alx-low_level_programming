#include "main.h"

/**
  * infinite_add - function to add two numbers
  * @n1: first number
  * @n2: second number
  * @r: buffer to store the result
  * @size_r: size of the buffer
  * Return: pointer to r if successful and 0 otherwise
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0;			/* store length of n1 */
	int len2 = 0;			/* store length of n2 */
	int num1 = 0;			/* extracted int in n1 */
	int num2 = 0;			/* extracted int in n2 */
	int carry = 0;			/* store result greater than 10 */
	int i = 0;				/* loop counter for r */
	int j = 0;				/* loop counter for n1 */
	int k = 0;				/* loop counter for n2 */
	int sum = 0;			/* hold the sum */

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	if (size_r - len1 > 1 && size_r - len2 > 1)
	{
		for (j = len1 - 1, k = len2 - 1; j >= 0 || k >= 0; j--, k--, i++)
		{
			num1 = (j < 0) ? 0 : n1[j] - 48;
			num2 = (k < 0) ? 0 : n2[k] - 48;
			sum = num1 + num2 + carry;
			if (sum > 9)
			{
				sum -= 10;
				carry = 1;
			}
			else
				carry = 0;
			r[i] = sum + '0';
		}
		if (carry == 1)
			r[i++] = '0' + 1;
		r[i] = '\0';
		rev_string(r);
	}
	else
		return (0);
	return (r);
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

	while (*(s + i++))
		len++;
	return (len);
}

/**
  * rev_string - function to reverse a string
  * @s: string to be reversed
  * Return: void
  */
void rev_string(char *s)
{
	int len = 0;			/* store string length */
	int i = 0;				/* loop counter */
	int j = 0;				/* loop counter for swap */
	char temp;				/* temporary character holder for swap */

	/* get the string length */
	while (*(s + i++))
		len++;

	for (i = 0, j = (len - 1); i < (len / 2); i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	s[len] = '\0';
}

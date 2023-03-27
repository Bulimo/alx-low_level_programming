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


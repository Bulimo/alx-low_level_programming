
/**
  * _atoi - function to convert string to int
  * @s: string to convert to int
  * Return: the int or 0
  */
int _atoi(char *s)
{
	int i = 0;					/* loop counter */
	int temp = 0;				/* hold the digit extracted */
	int number = 0;				/* hold the number extracted */
	int sign = 1;				/* check the sign of the number */

	while (s[i] != '\0')
	{
		if ((s[i] >= '0' && s[i] <= '9') || (s[i] == '-') || (s[i] == '+'))
		{

			if (s[i] == '-')
				sign *= -1;
			else if (s[i] == '+')
				sign *= 1;
			else
			{
				temp = s[i] - 48;
				number = (number * 10) + temp;
				/* end loop if next value is not a digit */
				if (s[i + 1] < '0' || s[i + 1] > '9')
				{
					if (s[i + 1] != '-' && s[i + 1] != '+')
						break;
				}
			}
		}
		i++;
	}
	number *= sign;

	return (number);
}

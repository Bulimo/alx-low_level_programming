#include "main.h"

/**
  * jack_bauer - prints every minute of the day starting form 00:00
  * Return: void
  */
void jack_bauer(void)
{
	int h = '0';
	int h1 = '0';
	int m = '0';
	int m1 = '0';

	while (h <= '2')
	{
		h1 = '0';
		while ((h1 <= '9' && h < '2') || (h1 <= '3' && h == '2'))
		{
			m = '0';
			while (m <= '5')
			{
				m1 = '0';
				while (m1 <= '9')
				{
					_putchar(h);
					_putchar(h1);
					_putchar(':');
					_putchar(m);
					_putchar(m1);
					_putchar('\n');
					m1++;
				}
				m++;
			}
			h1++;
		}
		h++;
	}
}

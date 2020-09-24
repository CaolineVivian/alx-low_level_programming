#include "holberton.h"
/**
 * more_numbers - print from 0 to 14 ten times, newline
 */
void more_numbers(void)
{
	int i = 48;
	int c;

	while (i < 58)
	{
		c = 48;
		while (c < 58)
		{
			_putchar(c);
			c++;
		}

		c = 16;
		while (c < 21)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}

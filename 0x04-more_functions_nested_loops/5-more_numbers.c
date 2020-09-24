#include "holberton.h"
/**
 * more_numbers - print from 0 to 14 ten times, newline
 */
void more_numbers(void)
{
	int c;

	c = 0;
	while (c < 10)
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
		}
		_putchar('\n');
		c++;
	}
}

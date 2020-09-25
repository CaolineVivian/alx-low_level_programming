#include "holberton.h"

/**
 * print_diagonal - draws diaogonal line in the
 * @n: variable for the length of line
 */
void print_diagonal(int n)
{
	int i, x;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			for (x = o, x < i; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * print_diagonal - draws diaogonal line in the
 * @n: variable for the length of line
 */
void print_diagonal(int n)
{
	int i = 0, x;

	if (n > 0)
	{
		while (i < n)
		{
			for (x = 0; x < i; x++)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	else
	{
		_putchar('\n');
	}
}

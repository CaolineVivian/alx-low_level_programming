#include "holberton.h"

/**
 * print_diagonal - draws diaogonal line in the
 * @n: variable for the length of line
 */
void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');

		for (x = 0; x < i; x++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}

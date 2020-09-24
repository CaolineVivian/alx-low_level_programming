#include "holberton.h"
/**
 * _isdigit - check for a digit 0 through 9
 * @c: integer to be checked
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	int ch = 48;

	while (ch < 58)
	{
		if (ch == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		ch++;
	}
	return (0);
}

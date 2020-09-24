#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 * @c: integer to be checked
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int ch = 65;

	while (ch <= 90)
	{
		if (c == ch)
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

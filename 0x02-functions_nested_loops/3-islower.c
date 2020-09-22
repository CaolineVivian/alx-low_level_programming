#include "holberton.h"
/**
 * int _islower - check whether lower or not
 * @c: The character to print
 *
 * Return: 1 when its lower and 0 otherwise
 */
int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

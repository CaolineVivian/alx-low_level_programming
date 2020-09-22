#include "holberton.h"
/**
 * main - code execution
 * @c: The character to print
 *
 * Description: check whether lower or not
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

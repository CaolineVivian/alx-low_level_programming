#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to print
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{

	for ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

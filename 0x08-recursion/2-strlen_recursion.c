#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to string
 *
 * Return: length of string, s
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 0;

	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}

#include "holberton.h"

/**
* _isdigit-Checks for digit
* @c: Value to be checked
* Return: 1 if c is a digit. 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

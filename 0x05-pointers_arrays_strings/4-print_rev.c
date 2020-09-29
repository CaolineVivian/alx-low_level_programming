#include "holberton.h"

/**
 * print_rev - print string in reverse followed by a newline
 * @s: string variable
 *
 */
void print_rev(char *s)
{
	int forward, reverse;

	for (forward = 0; s[forward] != '\0'; forward++)
	{
	}
	for (reverse = forward - 1; s[reverse] >= 0; reverse--)
	{
		_putchar(s[reverse]);
	}
	_putchar('\n');
}

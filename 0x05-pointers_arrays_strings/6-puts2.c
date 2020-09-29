#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string variable
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

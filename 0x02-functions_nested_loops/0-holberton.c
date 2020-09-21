#include "holberton.h"
/**
 * main - code execution
 * Description: print Holberton then newline
 * Return: 0
 */
int main(void)
{
	char *ch = "Holberton";
	unsigned int a;

	for (a = 0; a < sizeof(ch); a++)
	{
		_putchar(a);
	}

	_putchar('\n');
	return (0);
}

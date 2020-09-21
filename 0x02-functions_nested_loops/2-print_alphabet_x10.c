#include "holberton.h"
/**
 * main - code execution
 * Description: print lowercase alphabets 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 48;
	char ch;

	while (i <= 57)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

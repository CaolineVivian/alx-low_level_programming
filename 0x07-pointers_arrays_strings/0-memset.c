#include "holberton.h"

/**
 * _memset - function that fills memoery with a constant byte
 * @s: pointer to array to be filled
 * @b: constant byte used to fill memory
 * @n: limiter to the number of bytes to be filled
 *
 * Return: returns pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* index variable that loops over memory byte-to-byte*/
	unsigned int i;
	/* pointer to memory s*/
	unsigned char *memory = s, valu = b;

	for (i = 0; i < n; i++)
	{
		memory[i] = value;
	}
	return (memory);
}

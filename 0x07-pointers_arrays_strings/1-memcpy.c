#include "holberton.h"

/**
 * _memcpy - function copies memory area
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: limiter to looping index
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	index = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

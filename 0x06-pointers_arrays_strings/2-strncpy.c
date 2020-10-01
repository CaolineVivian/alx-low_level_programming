#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to string variable
 * @src: pointer to string variable
 * @n: limiter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}

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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[i] = src[j];
		}
	}
	return (dest);
}

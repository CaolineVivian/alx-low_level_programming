#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to string variable
 * @src: pointer to string variable
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int n = 0, m = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}
	dest[n] = '\0';
}

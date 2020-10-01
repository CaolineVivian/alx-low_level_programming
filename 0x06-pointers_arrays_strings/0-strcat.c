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
	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

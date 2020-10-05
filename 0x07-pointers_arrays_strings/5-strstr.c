#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: loacted substring or NULL if not found
 */
char *_string(char *haystack, char *needle)
{
	int index;

	while (*haystack)
	{
		for (index = 0; needle[index]; index++)
		{
			if (*haystack == needle[index])
			{
				return (needle[index]);
			}
			else
			{
				return ('\0');
			}
		}
		haystack++
	}
	return (needle[index]);
}

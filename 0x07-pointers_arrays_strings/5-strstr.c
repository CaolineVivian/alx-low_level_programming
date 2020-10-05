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
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
			} while (haystack[index] == needle[index]);
		}
		haystack++
	}
	return ('\0');
}

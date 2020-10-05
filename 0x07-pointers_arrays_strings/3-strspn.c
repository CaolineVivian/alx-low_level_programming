#include "holberton.h"

/**
 * _strspn - gets length of prefix substring
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int index, c;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (index = 0; accept[index]; index++)
		{
			if (s[c] == accept[index])
			{
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (c);
			}
		}
	}
	return (c);
}

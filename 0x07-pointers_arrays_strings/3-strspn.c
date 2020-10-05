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
	int index, byte;

	while (*s)
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (*s == accept[index])
			{
				byte++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (byte);
			}
		}
		s++
	}
	return (byte);
}

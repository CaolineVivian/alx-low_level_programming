#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string variable
 * Return: str
 */
char *rot13(char *str)
{
	int a, b;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; input[b] != '\0'; b++)
		{
			if (str[a] == input[b])
			{
				str[a] = output[b];
				break;
			}
		}
	}
	return (str);
}

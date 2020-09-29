#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string variable
 *
 */
void rev_string(char *s)
{
	int forward, reverse, temp;

	for (forward = 0; s[forward] != '\0'; forward++)
	{
	}
	forward--;

	for (reverse = 0; reverse < forward; reverse++, forward--)
	{
		temp = s[forward];
		s[forward] = s[reverse];
		s[reverse] = temp;
	}
}

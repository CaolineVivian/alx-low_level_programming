#include "holberton.h"

/**
 * swap_int - swap values
 * @a: swap integer
 * @b: swap integer
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

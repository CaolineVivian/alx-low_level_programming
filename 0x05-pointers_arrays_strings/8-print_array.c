#include <stdio.h>

/**
 * print_array - print array
 * @a: pointer to the array
 * @n: number of elements
 *
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num == 0)
		{
			printf("%d", a[num]);
		}
		else
		{
			printf(", %d", a[num]);
		}
	}
	putchar('\n');
}

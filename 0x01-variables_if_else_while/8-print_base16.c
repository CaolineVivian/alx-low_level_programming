#include <stdio.h>
/**
 * main - code execution
 * Description: print hexadecimal numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int j = 48;
	int k = 'a';

	while (j <= 58)
	{
		putchar(j);
		j++;
	}
	while (k <= 'f')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);

}

#include <stdio.h>
/**
 * main - code execution
 * Description:  print all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');

		}
		i++;
	}
	putchar('\n');
	return (0);
}

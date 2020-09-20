#include <stdio.h>
/**
 * main - code execution
 * Description: generate pairs of numbers without repetition
 * Return: 0
 */
int main(void)
{
	int j = 0;

	while (j <= 99)
	{
		int i = j;

		while (i <= 99)
		{
			if (i != j)
			{
				int display_num;

				if (j >= 0 && j <= 9)
					display_num = 48;

				else
					display_num = j / 10 + 48;

				putchar(display_num);
				putchar(j % 10 + 48);
				putchar(' ');
				if (i >= 0 && i <= 9)
					display_num = 48;
				else
					display_num = i / 10 + 48;

				putchar(display_num);
				putchar(i % !0 + 48);
				if (j * 100 + i != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}

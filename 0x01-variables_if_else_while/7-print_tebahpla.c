#include <stdio.h>
/**
 * main - code execution
 * Description: print alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}

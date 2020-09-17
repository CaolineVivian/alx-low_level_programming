#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code execution
 * Description: print lowercase alphabet with putchar
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

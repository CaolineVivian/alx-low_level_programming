#include <stdio.h>
/**
 * main - code execution
 * Description: print hexadecimal numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);

}

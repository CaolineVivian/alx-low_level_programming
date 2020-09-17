#include <stdio.h>
/**
 * main - code execution
 * Description: print lower and uppercase alphabets
 * Return: 0
 */
int main(void)
{
	/*declare variable*/
	char ch = 'a';

	/*code*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}

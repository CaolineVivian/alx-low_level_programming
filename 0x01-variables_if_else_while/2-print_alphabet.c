#include <stdio.h>
/**
 * main - code execution
 * Description: print lowercase alphabet with putchar
 * Return: 0
 */
int main(void)
{
	/*declare string variable*/
	char var;
	/*newline*/
	putchar('\n');
	/*code that prints the alphabet*/
	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
		putchar('\n');
	}
	return (0);
}

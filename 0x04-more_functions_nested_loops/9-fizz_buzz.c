#include <stdio.h>

/**
 * print_buzz - fuction that prints the word Buzz when called
 */
void print_buzz(void)
{
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
}
/**
 * print_fizz - function that prints the word Fizz when called
 */
void print_fizz(void)
{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
}
/**
 * print_fizz_buzz - prints the  words fizzbuzz
 */
void print_fizz_buzz(void)
{
	print_fizz();
	putchar(' ');
	print_buzz();
}

/**
 * main - prints numbers 1 to 100, newline
 * for multiple of three print Fizz and of five Buzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 15 == 0)
			print_fizz_buzz();
		else if (i % 3 == 0)
			print_fizz();
		else if (i % 5 == 0)
			print_buzz();
		else
			printf("%i", i);
		putchar(' ');
	}

	print_buzz();
	putchar('\n');
	return (0);
}

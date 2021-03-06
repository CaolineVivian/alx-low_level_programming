#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers
 * @argc: counts the number of command line argument
 * @argv: array that point to argc
 *
 * Return: Error and 1 on failure and 0 on success
 */
int main(int argc, char *argv[])
{
	int first, second, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		mul = first * second;
		printf("%d\n", mul);
	}
	return (0);
}

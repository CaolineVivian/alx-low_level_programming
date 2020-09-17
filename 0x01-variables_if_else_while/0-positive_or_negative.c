#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - start code execution
 * Description: program assigns random number to n each time it is executed
 * Return: 0
 */
int main(void)
{
	/*integer value*/
	int n;
	/*the random number function*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*if statement*/
	if (n > 0)
	{
		printf("%i is positve\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}

	return (0);
}

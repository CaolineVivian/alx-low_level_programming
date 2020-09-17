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
	int last_digit;
	/*random number function*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*last digit of n*/
	last_digit = n % 10;
	printf("Last digit of %i is %i and is ", n, last_digit);
	/*if statement*/
	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (n == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);

}

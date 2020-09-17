#include <stdlib.h>
#include <stdtime.h>
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
	/*random number function*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*if statement*/
	if (n > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else if (n < 6) && (n != 0)
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
	return (0);

}

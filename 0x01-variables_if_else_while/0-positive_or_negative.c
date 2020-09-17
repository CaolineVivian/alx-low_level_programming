#include <stdlib.h>
#include <time.h>


/**
 * main - start code execution
 * Description: program assigns random number to n each time it is executed
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**/

	return (0);
}

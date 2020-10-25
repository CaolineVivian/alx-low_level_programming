#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings, followed by a new line
 * @separator: indefinite number of string pointers parameters
 * @n: indefinite number of int  parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *string;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char *);

		if (string == NULL)
		{
			printf("nil");
		}
		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s%s", string, separator);
			else
				printf("%s", string);
		}
	}

	printf("\n");

	va_end(valist);
}

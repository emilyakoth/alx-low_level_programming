#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print_numbers
 * @separator: separator
 * @n: numbers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (x < n)
		{
			printf("%d", va_arg(args, int));

			if (x != n - 1 && sparator != NULL)
				printf("%s", separator);

			x++;
		}
		va_end(args);
	}
	printf("\n");
}

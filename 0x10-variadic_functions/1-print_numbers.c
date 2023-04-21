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
	char *sep
	unsigned int x;
	va_list args;

	if (separator == NULL || *separator == 0)
		sep = "";
	else 
		sep = (char * separator);
		va_start(args, n);

		if (n < 0)
		{
			printf("%d", va_arg(args, int));
			for (x = 1; x < n; x++)
			printf("%s%d", sep, va_arg(args, int));
		printf("\n");
		va_end(args);
}
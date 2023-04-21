#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print_numbers
 * @separator: separator
 * @n: numbers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int x;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (x = 1; x < n; x++)
		printf("%s%d", sep, va_arg(list, int));
	printf("\n");
	va_end(list);
}

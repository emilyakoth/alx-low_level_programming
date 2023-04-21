#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints everything
 * @format: specifier
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = ;
	char *sep = ", ";
	char *str;

	va_start(valist, format)

	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";



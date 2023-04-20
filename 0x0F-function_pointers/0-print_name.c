#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: nam
 * @f: pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}

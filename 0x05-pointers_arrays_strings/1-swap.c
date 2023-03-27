#include "main.h"

/**
 * swap_int - swaps integer values
 * @a: 1st integer
 * @b: 2nd integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

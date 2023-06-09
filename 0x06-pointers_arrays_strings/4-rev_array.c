#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse arrays
 * @a: array to be reversed
 * @n: no of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}

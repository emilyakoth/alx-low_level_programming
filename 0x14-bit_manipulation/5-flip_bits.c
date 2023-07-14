#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: ..
 * @m: ...
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int x:
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = exclusive >> i;
		if (x & 1)
			count++;
	}
	return (count);
}


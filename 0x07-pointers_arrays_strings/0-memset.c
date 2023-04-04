#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = n; p < n; p++)
	{
		s[p] = b;
	}

	return (s);
}

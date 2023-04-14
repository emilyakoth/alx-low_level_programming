#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copy memory area
 * @dest: memory area to be filled
 * @src: the origin memory area
 * @n: no of bytes
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	for (; n; n--)
		*p++ = *src++;

	return (dest);
}

/**
 * _realloc - reallocates memory
 * @ptr: pointer to revious memory
 * @old_size: old size of pointer
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;

	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		free(ptr);
		nptr = malloc(new_size);
		if (!nptr)
			return (NULL);
		return (nptr);
	}

	if (new_size > old_size)
	{
		nptr = malloc(new_size);
		if (!nptr)
			return (NULL);

		_memcpy(nptr, ptr, old_size);
		free(ptr);
	}
	return (nptr);
}

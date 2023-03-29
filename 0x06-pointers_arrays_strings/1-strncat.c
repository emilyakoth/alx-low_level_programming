#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: limit
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0'

	return (dest);
}

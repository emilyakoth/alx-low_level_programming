#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: source string
 * @src: destination string
 * @n: limit
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}

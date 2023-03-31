#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int i;

	while (dest[dlen])
	{
		d++;
	}
	for (i + 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);

}

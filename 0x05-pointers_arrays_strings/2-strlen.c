#include "main.h"

/**
 * _strlen - returns the lenghth of a string
 * @s: string
 * Return: leghth of the string
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

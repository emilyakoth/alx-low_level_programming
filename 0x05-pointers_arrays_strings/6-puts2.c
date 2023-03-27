#include "main.h"

/**
 * puts2 - reverses a string
 * @str: the string to be reversed
 * Return: void
 */
void puts2(char *str)
{
	int j;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}


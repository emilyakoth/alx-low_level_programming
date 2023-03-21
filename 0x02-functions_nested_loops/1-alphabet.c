#include "main.h"

/**
 * main - Entry point
 *
 * prints putchar
 *
 * Return: Always 0 if success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

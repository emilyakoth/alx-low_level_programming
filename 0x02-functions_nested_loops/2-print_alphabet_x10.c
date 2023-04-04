#include "main.h"

/**
 *  print_alphabet_x10 - prints ten times the alphabet
 *
 *  Return: Always 0 if sucess
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}

#include "test.h"

/**
 *print_alphabet_x10 - prints the alphabet10 times in lower case
 *
 */
void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}

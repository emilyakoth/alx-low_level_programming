#include "test.h"
#include <string.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c[] = "_putchar";
	int x;
	int l = strlen(c);

	for (x = 0; x < l; x++)
		_putchar(c[x]);
	_putchar('\n');
}

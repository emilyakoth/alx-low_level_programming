#include "main.h"

/*
 * main - entry point
 * checks code
 * Return: Always 0 if success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++);
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

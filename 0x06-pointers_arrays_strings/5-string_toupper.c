#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @n: the string
 *
 * Return: char
 */
char *string_toupper(char *n)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}

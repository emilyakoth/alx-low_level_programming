include "main.h"

/**
 * main - check the code.
 *
 * Return: 1 if alphabetic and 0 is otherwise.
 */
int _isalpha(int c)
{
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}


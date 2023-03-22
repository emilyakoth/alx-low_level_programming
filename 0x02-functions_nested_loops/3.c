#include "test.h"

/**
 * _islower - checks or lowercase character
 * @c: c is the value to check if lowercase
 * Return: 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int r = 0;
	int lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}
	}

	return (r);
}



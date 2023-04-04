#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: substring
 * @accept: accepted string
 * Return: no of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	for (; *s; s++)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				count++;
				break;
			}
		}
		if (!*p)
			break;
	}

	return (count);
}


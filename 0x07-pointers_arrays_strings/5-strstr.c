#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack:search string
 * @needle: string to find
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] != '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}


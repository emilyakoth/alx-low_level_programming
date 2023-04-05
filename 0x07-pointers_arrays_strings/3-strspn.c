#include "main.h"

/**  _strspn - gets lenght of a substring
 * @s: source string
 * @accept: accepted string
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b;
	unsigned int t = 0;
	
	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}

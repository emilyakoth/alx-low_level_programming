#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *@s1: string one
 *@s2: string 2
 * Return: the string
 */
char *str_concat(char *s1, char *s2)
{
	int m = 0;
	int n = 0;
	int o = 0;
	int p = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[m])
		m++;

	while (s2[n])
		n++;

	p = m + n;
	s = malloc((sizeof(char) * p) + 1);

	if (s == NULL)
		return (NULL);

	n = 0;
	while (o < p)
	{
		if (o <= m)
			s[o] = s1[o];
		if (o >= m)
		{
			s[o] = s2[n];
			n++;
		}

		o++;
	}
	s[o] = '\0';
	return (s);
}

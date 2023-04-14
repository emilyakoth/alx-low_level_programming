#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m = 0, x = 0, o = 0, p = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[m])
		m++;

	while (s2[o])
		o++;

	if (n >= o)
		p = m + o;
	else 
		p = m + n;

	str = malloc(sizeof(char) * p + 1);
	if (str == NULL)
		return (NULL);

	o = 0;
	while (x < p)
	{
		if (x <= m)
			str[x] = s1[x];
		if (x >= m)
		{
			str[x] = s2[o];
			o++;

		}
		x++;
	}
	str[x] = '\0';
	return  (str);
}

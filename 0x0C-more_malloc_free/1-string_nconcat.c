#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * n: number of bytes
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m = 0, n = 0, o = 0, p = 0;
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

	str = malloc(sizeof(char) * 1 + 1);
	if (str == NULL)
		return (NULL);

	o = 0;
	while (n < 1)
	{
		if (n <= m)
			str[n] = s1[n];
		if (n >= m)
		{
			str[n] = s2[o];
			o++;

		}
		n++;
	}
	str[n] = '\0';
	return  (str);
}

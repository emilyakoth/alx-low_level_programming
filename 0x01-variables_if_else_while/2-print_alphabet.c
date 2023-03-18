#include <stdio.h>

/**
 * main - Entry point
 * prints alphabets in lower case
 * Return: Alays 0 if sucess
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}

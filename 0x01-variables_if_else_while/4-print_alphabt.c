#include <stdio.h>
/**
 * main - Entry point
 * prints alphabet in lower case
 * followed by a new line
 * Return: Always 0 if sucess
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

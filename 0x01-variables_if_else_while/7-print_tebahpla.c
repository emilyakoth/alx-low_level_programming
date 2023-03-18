#include <stdio.h>
/**
 * main -  Entry point
 * prints lower case in alphabet reverse
 * Return: Always 0 if sucess
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

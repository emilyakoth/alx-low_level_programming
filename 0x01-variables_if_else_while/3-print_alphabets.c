#include <stdio.h>
/**
 * main - Entry point
 * prints alphabet in lower case
 * followed by a new line
 * Return: Always 0 if sucess
 */
int main(void)
{
	int char;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

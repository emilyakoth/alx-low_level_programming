#include <stdio.h>
/**
 * main - Entry point
 * prints all single digits of base 10
 * Return: Always 0 if sucess
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

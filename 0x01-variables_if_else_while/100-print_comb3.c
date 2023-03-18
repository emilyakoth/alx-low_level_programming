#include <stdio.h>

/**
 * main - Entry point
 * print all possible 2digit numbers
 * Return: Always 0 if success
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (m > n)
				{
					putchar(n);
					putchar(m);
					if (n != 55 || m != 56)
					{
						putchar(',');

						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

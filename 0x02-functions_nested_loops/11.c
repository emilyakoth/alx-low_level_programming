#include "test.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers
 * @n: natural number to start printing from
 * 
 */
void print_to_98(int n)
{	int x;
	int y;
	int new;
	
	if (n <= 98)

	{
		for (x = n; x<= 98; x++)
		{
			if (x != n)
			{
				putchar(' ');
			}
			if (x < 0)
			{
				new = (x * -1);
				putchar('-');

				if (new < 10)
					putchar(new + '0');

		}		
	}
}

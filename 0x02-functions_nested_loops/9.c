#include "test.h"

/**
 * times_table -  prints the 9 times table
 *
 */

void times_table(void)
{
	int x;
	int y;
	int times;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			times = x * y;
			if (y != 0)
			{
				if (times < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
			if (times > 9)
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			else
			{
				_putchar(times + '0');
			}
			if (y != 9 )
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

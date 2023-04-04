#include "test.h"

/**
 * jack_bauer -  prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int mins = 1440;
	int min;
	int hrs;
	int x;

	for (min = 0; min < mins; min++)
	{
		if (min % 60 == 0)
		{
			hrs = min / 60;
			for (x = 0; x < 60; x++)
			{
				_putchar((hrs / 10) + '0');
				_putchar((hrs % 10) + '0');
				_putchar(':');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				_putchar('\n');
			}
		}
	}
}

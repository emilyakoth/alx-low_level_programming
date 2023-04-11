#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int m;
	int n;
	int o;
	int p;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		a[m] = malloc(sizeof(int) * width);

		if (a[m] == NULL)
		{
			for (n = m; n >= 0; n--)
			{
				free(a[n]);
			}

			free(a);
			return (NULL);
		}
	}

	for (o = 0; o < height; o++)
	{
		for (p = 0; p < width; p++)
		{
			a[o][p] = 0;
		}
	}

	return (a);
}

#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size
 * @cmp: cmp
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (cmp != NULL && array != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]));
				return (x);

				x++;
			}
		}
	}
}

#include "function_pointers.h"

/**
 * array_iterator -  executes a function
 * @array: array
 * @size: siz
 * @action: action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (action != NULL && array != NULL & size > 0)
	{
		while (x < size)
		{
			ction(array[x]);
			x++;
		}
	}
}

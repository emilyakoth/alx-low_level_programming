#include "lists.h"

/**
 * listint_len - retunr no of elements
 * @h: linked list
 *
 * Return: no onf notes
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}


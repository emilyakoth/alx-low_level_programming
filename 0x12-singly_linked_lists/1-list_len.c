#include "lists.h"

/**
 *  list_len - return elements to file
 *  @h:...
 *
 *  Return: size
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;
	
	temp = h;
		while (temp)
		{
		counter++;
		temp = temp->next;
		}
	return(counter);
}


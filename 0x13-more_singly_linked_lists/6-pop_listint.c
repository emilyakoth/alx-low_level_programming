#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer
 *
 * Return: ...
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (a);
}

#include "lists.h"
/**
 * free_dlistint - return the number of element
 * @head: the head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *alpha;

	while (head)
	{
		alpha = head->next;
		free(head);
		head = alpha;
	}
}

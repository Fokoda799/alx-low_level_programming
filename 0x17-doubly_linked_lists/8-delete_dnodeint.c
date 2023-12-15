#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at a certain index
 * @head: head of the linked list
 * @index: index that you want to delete node at
 * Return: freed node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int j = 0;
	dlistint_t *new = *head;

	if (!(*head) || index < j)
		return (-1);
	if (index == 0)
	{
		*head = new->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(new);
		return (1);
	}
	for (i = 0; i < index && new != NULL; i++)
		new = new->next;

	if (new == NULL)
		return (-1);
	new->prev->next = new->next;
	if (new->next != NULL)
		new->next->prev = new->prev;
	free(new);
	return (1);
}

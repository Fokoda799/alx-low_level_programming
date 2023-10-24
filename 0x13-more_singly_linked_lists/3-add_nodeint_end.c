#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the
 * end of a listint_t list
 * @head: header of lists
 * @n: int type
 * Return: head pointer or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (end == NULL)
	return (NULL);
	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = end;

	return (*head);
}

#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list
 * @head: header of lists
 * @n: int type
 * Return: head pointer or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

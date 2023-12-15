#include "lists.h"
/**
 * add_dnodeint - return the number of element
 * @head: the head
 * @n: the data
 * Return: the number of the element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (new);
}

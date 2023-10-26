#include "lists.h"

/**
 * free_listint2 - function that free a listint_t list
 * @head: header of lists
 * Return: head pointer or NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *current = *head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

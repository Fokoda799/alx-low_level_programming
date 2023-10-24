#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: the header of the linked list
 * Return: numb of element.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp)
	{
		printf(tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}

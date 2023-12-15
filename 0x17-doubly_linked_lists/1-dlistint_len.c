#include "lists.h"
/**
 * dlistint_len- return the number of element
 * @h: the linked list
 * Return: the number of the element
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

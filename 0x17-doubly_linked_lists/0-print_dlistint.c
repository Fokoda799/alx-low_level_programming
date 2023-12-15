#include "lists.h"
/**
 * print_dlistint- return the number of element
 * @h: the linked list
 * Return: the number of the element
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}

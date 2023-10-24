#include "lists.h"

/**
 * listint_len - function that returns the number of elements in
 * a linked listint_t list.
 * @h: the header of the linked list
 * Return: numb of element.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t count = 0;

	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

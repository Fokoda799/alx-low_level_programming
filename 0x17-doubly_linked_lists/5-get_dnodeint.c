#include "lists.h"
/**
 * get_dnodeint_at_index - return the number of element by index
 * @head: the head
 * @index: the data
 * Return: the value of the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (counter == index)
		{
			return (head);
		}
		head = head->next;
		counter++;
	}
	return (0);
}

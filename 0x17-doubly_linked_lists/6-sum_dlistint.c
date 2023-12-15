#include "lists.h"
/**
 * sum_dlistint - return the number of element
 * @head: the head
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int summer = 0;

	while (head)
	{
		summer += head->n;
		head = head->next;
	}
	return (summer);
}

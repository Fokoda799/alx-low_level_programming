#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n_node, *tmp_n_d;

n_node = malloc(sizeof(list_t));

if (n_node == NULL)
return (NULL);

n_node->str = strdup(str);
n_node->len = _strlen(str);
n_node->next = NULL;

if (!*head)
{
*head = n_node;
}
else
{
tmp_n_d = *head;
while (tmp_n_d->next)
tmp_n_d = tmp_n_d->next;
{
tmp_n_d->next = n_node;
}
}
return (n_node);
}

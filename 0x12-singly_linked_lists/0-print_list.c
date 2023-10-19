#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: struct list
* Return: number of elements printed.
*/
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t i;

for (i = 0; current != NULL; i++)
{
if (current->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
current = current->next;
i++;
}

printf("[%d] %s \n", current->len, current->str);
current = current->next;
}
return (i);
}

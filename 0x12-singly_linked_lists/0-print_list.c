#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: struct list
* Return: number of elements printed.
*/
size_t print_list(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
i++;
}
else
{
printf("[%d] %s \n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}

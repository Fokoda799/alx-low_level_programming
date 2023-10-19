#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string>

/**
* struct list - linked list.
* @len : intger var.
* @str : string var.
* @next : struct pointer.
*/
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
add_node(list_t **head, const char *str);
list_len(const list_t *h);
add_node_end(list_t **head, const char *str);
free_list(list_t *head);
void print_before_main(void) __attribute__((constructor));
void print_before_main(void);
#endif


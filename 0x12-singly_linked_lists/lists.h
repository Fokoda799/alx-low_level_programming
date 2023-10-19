#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

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
#endif


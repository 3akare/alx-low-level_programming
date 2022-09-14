#ifndef _LIST_H_
#define _LIST_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - sinlgy linked list
 * @str: string - (malloc'ed string)
 * @len: lenght of the string
 * @next: points to the next node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif

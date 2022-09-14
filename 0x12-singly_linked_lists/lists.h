#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node 
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
}list_t;

#endif
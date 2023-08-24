#ifndef LISTS_H
#define LISTS_H
#include<stdlib.h>
#include<stdio.h>

/**
 * struct list_s - singly linked list
 *
 * @str: string within (Malloc'ed)
 * @len: Length of String
 * @nxt: Pointer to next node
 *
 * Description: Node structure within singly LL
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *nxt;
} list_t;

size_t print_list(const list_t *h);

#endif

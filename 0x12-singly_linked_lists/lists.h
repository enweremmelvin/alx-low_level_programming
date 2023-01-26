#ifndef LISTS_H
#define LISTS_H

/**
 * struct list - declaration of list structure
 *
 * @str: string
 * @len: length of string
 * @next: address field of linked list
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif

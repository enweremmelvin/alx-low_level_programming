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
	unsigned int len;
	struct list *next;
} list_t;

/* function prototypes */
size_t print_list(const list_t *h);

#endif

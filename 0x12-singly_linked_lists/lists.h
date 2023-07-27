#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/* Function Prototypes */
int _putchar(char c);
size_t print_list(const list_t *h);
int _numlen(int n);
char *_itoa(int n);

#endif /* LISTS_H */

#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: the index of the list where the new node should be added, starting 0
 * @n: the data to be stored in the new node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t prev_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	prev_node = *head;

	for (i = 0; i < idx - 1 && prev_node != NULL; i++)
	{
		prev_node = prev_node->next;
	}

	if (prev_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}

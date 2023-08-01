#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to a pointer to the head of the list
 * @index: the index of the node that should be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		return (1);
	}
	prev_node = *head;

	for (i = 0; i < index - 1 && prev_node != NULL; i++)
		return (-1);

	temp = prev_node->next;
	prev_node->next = temp->next;
	free(temp);

	return (1);
}

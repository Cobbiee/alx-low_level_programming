#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pinter to a pointer to the head of the list
 *
 * Return: the head node's data (n), or if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	
	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node and returns node’s data n
 * @head: pointer to a struct
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (head == NULL)
		return (0);

	current = *head;
	if (current == NULL)
		return (0);

	v = current->n;
	*head = current->next;
	free(current);
	return (v);
}

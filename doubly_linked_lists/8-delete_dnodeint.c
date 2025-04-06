#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node that should be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!temp)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp && index--)
		temp = temp->next;
	if (!temp)
		return (-1);
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}

#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		currentNode = (*head)->next;
		free(*head);
		*head = currentNode;
	}

	*head = NULL;
}

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first node in the linked list
 * @index: index of the node starting at 0
 *
 * Return: the nth node, or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current ? current : NULL);
}

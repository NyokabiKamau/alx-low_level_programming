#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list_t list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *flist;

	while ((flist = head) != NULL)
	{
		head = head->next;
		free(flist->str);
		free(flist);
	}
}

#include "lists.h"
/**
 * free_list - Free lists
 * @head: Pointer to the head
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

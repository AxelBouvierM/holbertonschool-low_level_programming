#include "lists.h"
/**
 * get_nodeint_at_index - function that return the nth node of a list
 * @head: Pointer to first node
 * @index: Index of the node, starting at 0
 * Return: The nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	tmp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (tmp != NULL)
	{
		if (i == index)
		{
			return (tmp);
		}
		i++;
		tmp = tmp->next;
	}
	return (0);
}

#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *_strlen - Prints out a string to 10.
 *@s: First variable
 * Return: count
 */
int _strlen(const char *s)
{
	int count = 0;

	while (*s != '\0')
{
	count++;
	s++;
}
	return (count);
}

/**
 * add_node_end - Adds a new node at the end
 * @head: First struct
 * @str: CAMBIAR
 * Return: The address of the new element or null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *new_struct_end = malloc(sizeof(list_t));
	list_t *temp;

	if (new_struct_end == NULL)
	{
		return (NULL);
	}

	new_struct_end->str = strdup(str);
	new_struct_end->len = _strlen(str);
	new_struct_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_struct_end;
		return (new_struct_end);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_struct_end;

	return (new_struct_end);
}

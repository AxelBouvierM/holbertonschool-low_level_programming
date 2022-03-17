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
 * add_node - Adds a new node at the beginning
 * @head: First struct
 * @str: CAMBIAR
 * Return: The address of the new element or null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *new_struct = malloc(sizeof(list_t));

	if (new_struct == NULL)
	{
		return (NULL);
	}
	new_struct->str = strdup(str);
	new_struct->len = _strlen(str);
	new_struct->next = *head;
	*head = new_struct;

	return (new_struct);
}

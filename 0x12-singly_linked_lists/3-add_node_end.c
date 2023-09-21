#include "lists.h"
#include <string.h>
/**
   * add_node_end - adds a new node at the end of a list_t*
   * @head: pointer tht hold the address of a singly linked list
   * @str: string to be duplicated
   * Return: the address of a new node
   */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	size_t i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[i])
	{
		i++;
	}
	new->len = i;
	new->next = NULL;
	current = *head;

	if (current == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (*head);

}

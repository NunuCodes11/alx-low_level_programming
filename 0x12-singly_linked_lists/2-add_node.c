#include "lists.h"
#include <string.h>
/**
   * add_node - adds a new node at the beginning of a list_t*
   * @head: pointer tht hold the address of a singly linked list
   * @str: string to be duplicated
   * Return: the address of a new node
   */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;


	*head = new;
	return (*head);
}

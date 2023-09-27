#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - frees the memory allocated for head
  * @head: singly link list
  */
void free_listint2(listint_t **head)
{
	listint_t *current;


	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}

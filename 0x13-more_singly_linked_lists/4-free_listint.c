#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - frees the memory allocated for head
  * @head: singly link list
  */
void free_listint(listint_t *head)
{
	listint_t *current;


	for (current = head; current != NULL; current = head)
	{
		head = head->next;
		free(current);
	}
}

#include "lists.h"
#include <stdlib.h>
/**
  * free_list - frees the memory allocated for head
  * @head: singly link list
  */
void free_list(list_t *head)
{
	list_t *current;

	current = head;

	while (current != NULL)
	{
		free(current->str);
		free(current);
		current = current->next;
	}
}

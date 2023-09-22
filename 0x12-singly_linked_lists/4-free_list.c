#include "lists.h"
#include <stdlib.h>
/**
  * free_list - frees the memory allocated for head
  * @head: singly link list
  */
void free_list(list_t *head)
{
	list_t *current;


	for (current = head; current != NULL; current = head)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

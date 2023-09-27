#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: pointer to list
  * Return: the head node’s data (n), 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (temp == NULL)
	{
		return (0);
	}
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}

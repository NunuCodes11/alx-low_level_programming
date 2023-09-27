#include "lists.h"
/**
  * sum_listint - the sum of all the data (n) of a linked list
  * @head: pointer to the list*
  * Return: Sum of the linked list, or 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (temp == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

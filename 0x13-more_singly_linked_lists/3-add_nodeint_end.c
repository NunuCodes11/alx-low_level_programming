#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: pointer to the adress of the list
  * @n: value to be inserted
  * Return: the address of a new element or NULL if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	ptr = *head;

	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next= temp;
	}
	return (*head);


}
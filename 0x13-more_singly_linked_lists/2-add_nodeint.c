#include "lists.h"
/**
  * add_nodeint - adds a new node at the beginning of a list
  * @head: pointer to the adress of the list
  * @n: value to be inserted
  * Return: the address of a new element or NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}

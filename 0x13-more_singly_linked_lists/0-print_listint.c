/**
  * print_listint - prints linked list
  * @h: the pointer to the list
  * Return: the length
  */
#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}

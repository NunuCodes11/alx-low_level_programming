/**
  * listint_len - a function that returns the number of elements in a list
  * @h: the pointer to the list
  * Return: the length
  */
#include "lists.h"
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

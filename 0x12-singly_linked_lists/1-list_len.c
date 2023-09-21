#include "lists.h"
/**
   * list_len -  prints all the elements of a list_t list
   * @h: singly link list
   * Return: number of elements
   */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}

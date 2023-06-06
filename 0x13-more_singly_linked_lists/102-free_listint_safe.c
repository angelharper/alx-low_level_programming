#include "lists.h"

/**
 * free_listint_safe -Function that frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: The number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp, *next;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			next = (*h)->next;
			free(*h);
			*h = next;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	return (len);
}

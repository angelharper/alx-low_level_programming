#include "lists.h"

/**
 * add_node - Adds a node to the beginning of a linked list.
 * @head: Pointer to the head of the list.
 * @str: String to be used as the content of the new node.
 * Description: This function creates a new node with the provided string.
 * Return: Address of the newly added node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *cursor = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}

/**
 * _strlen - counts the length of a string
 * @str: string to be counted
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

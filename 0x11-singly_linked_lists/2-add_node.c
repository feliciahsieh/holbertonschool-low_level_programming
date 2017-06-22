#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to new list node
 * @str: text to be added to str element in list element
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = NULL;
	char *newstring = NULL;
	unsigned int n = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	while (str[n])
		n++;

	newnode->len = n;
	newstring = strdup(str);
	if (newstring == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else
		newnode->str = strdup(str);

	if (*head != NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		*head = newnode;
		newnode->next = NULL;
	}

	return (newnode);
}

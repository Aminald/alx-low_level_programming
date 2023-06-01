#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
unsigned int len = 0;
/* Calculate the length of the string */
while (str[len])
len++;
/* Create a new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
/* Set the values for the new node */
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;
/* If the list is empty, set the new node as the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
/* Find the last node in the list */
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;
/* Append the new node to the end of the list */
last_node->next = new_node;
return (new_node);
}

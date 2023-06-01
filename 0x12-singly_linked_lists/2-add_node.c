#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and added as the new node.
 *
 * Return: Address of the new element (success), or NULL (failure).
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *str_copy;
unsigned int len;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
str_copy = strdup(str);
if (str_copy == NULL)
{
free(new_node);
return (NULL);
}
for (len = 0; str[len]; len++);
new_node->str = str_copy;
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}

#include "lists.h"

/**
 * add_node_end - Add a new node to the end of a list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: String to store in the list.
 * Return: Address of the updated head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp_node;
    size_t str_length;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);

    str_length = 0;
    while (str[str_length] != '\0')
    {
        str_length++;
    }

    new_node->len = str_length;
    new_node->next = NULL;

    temp_node = *head;

    if (temp_node == NULL)
    {
        *head = new_node;
    }
    else
    {
        while (temp_node->next != NULL)
        {
            temp_node = temp_node->next;
        }
        temp_node->next = new_node;
    }

    return (*head);
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list and its strings
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
    list_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;

        free(current->str);  // Free the duplicated string
        free(current);       // Free the node itself
    }
}

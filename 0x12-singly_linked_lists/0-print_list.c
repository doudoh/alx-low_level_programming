#include "lists.h"

/**
 * print_list - Print all elements of a list_t list.
 * @h: The singly linked list.
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
    size_t element_count = 0; // Counter for the number of elements

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[%d] %s\n", 0, "(nil)"); // Print the length and (nil) for NULL string
        }
        else
        {
            printf("[%d] %s\n", h->len, h->str); // Print the length and the string
        }
        h = h->next; // Move to the next node
        element_count++; // Increment the element count
    }

    return element_count; // Return the total number of elements
}

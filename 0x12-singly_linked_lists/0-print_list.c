#include <stdio.h>
#include "lists.h"

int main(void) {
  list_t *head;
  list_t *new;
  list_t hello = {"World", 5, NULL};
  size_t n;

  head = &hello;
  new = malloc(sizeof(list_t));
  if (new == NULL) {
    printf("Error\n");
    return 1;
  }

  new->str = strdup("Hello");
  new->len = 5;
  new->next = head;
  head = new;

  // Print the list
  n = print_list(head);

  // Print the number of elements in the list
  printf("-> %lu elements\n", n);

  // Free the allocated memory
  free(new->str);
  free(new);

  return 0;
}

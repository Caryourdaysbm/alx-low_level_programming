#include "lists.h"

/**
 * list_len - the function that return the number of elements
 * in a linked list.
 * @h: the pointer that points to the struct.
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
int element;

element = 0;

while (h != NULL)
{
h = h->next;
element++;
}
return (element);
}

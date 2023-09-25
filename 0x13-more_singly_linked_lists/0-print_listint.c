#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: A pointer to the linked list of type listint_t to print.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0; /* Initialize a variable to count the number of nodes. */

	while (h) /* Loop through the linked list until 'h' becomes NULL (end of the list). */
	{
		printf("%d\n", h->n); /* Print the value of the current node's 'n' member. */
		num++; /* Increment the node count. */
		h = h->next; /* Move the pointer 'h' to the next node in the linked list. */
	}

	return (num); /* Return the total number of nodes in the linked list. */
}


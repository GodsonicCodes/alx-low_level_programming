#include "lists.h" // Include the necessary header file


/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of a list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
    size_t nnodes = 0; // Initialize a counter for the number of elements

    while (h != NULL)
    {
        nnodes++; // Increment the element counter
        h = h->next; // Move to the next element in the list
    }

    return (nnodes); // Return the total number of elements in the list
}


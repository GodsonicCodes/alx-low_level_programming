#include "lists.h" // Include the necessary header file


/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the head of a list
 *
 * Return: number of nodes in the list
*/


size_t print_listint(const listint_t *h)
{
    size_t nnodes = 0; // Initialize a counter for the number of nodes

    while (h != NULL)
    {
        nnodes++; // Increment the node counter
        printf("%d\n", h->n); // Print the value of the current node
        h = h->next; // Move to the next node in the list
    }

    return (nnodes); // Return the total number of nodes in the list
}


#include "lists.h" // Include the necessary header file

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
    listint_t *tmp; // Declare a temporary pointer to hold the next node

    while (head) // Continue as long as the list is not empty (head is not NULL)
    {
        tmp = head->next; // Store the next node in the temporary pointer
        free(head); // Free the current node
        head = tmp; // Move the head to the next node (or NULL if end of list)
    }
}


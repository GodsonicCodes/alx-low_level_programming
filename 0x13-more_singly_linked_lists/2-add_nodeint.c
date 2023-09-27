#include "lists.h" // Include the necessary header file


/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: pointer to a pointer to the head of a list
 * @n: value to be stored in the new node
 *
 * Return: NULL if memory allocation fails or if head is NULL
 *         Otherwise - the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new; // Declare a pointer to a new list node

    new = malloc(sizeof(listint_t)); // Allocate memory for the new node

    if (new == NULL) // Check if memory allocation failed
        return (NULL);

    new->n = n; // Assign the provided value to the new node
    new->next = *head; // Set the new node's next pointer to the current head
    *head = new; // Update the head pointer to point to the new node

    return (*head); // Return the address of the new element (new head)
}


#include "lists.h" // Include the necessary header file

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to a pointer to the head of the list
 * @n: number to be used as content for the new node
 *
 * Return: NULL if memory allocation fails or head is NULL
 *         Otherwise - the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node; // Declare a pointer to a new list node
    listint_t *cursor = *head; // Declare a cursor to traverse the list

    new_node = malloc(sizeof(listint_t)); // Allocate memory for the new node

    if (new_node != NULL) // Check if memory allocation was successful
    {
        new_node->n = n; // Assign the provided value to the new node
        new_node->next = NULL; // Initialize the next pointer of the new node

        if (cursor != NULL) // If the list is not empty
        {
            while (cursor->next != NULL) // Traverse to the end of the list
                cursor = cursor->next;

            cursor->next = new_node; // Append the new node to the end
        }
        else // If the list is empty, set the new node as the head
        {
            *head = new_node;
        }

        return (new_node); // Return the address of the new element
    }
    else // Memory allocation failed
    {
        return (NULL);
    }
}


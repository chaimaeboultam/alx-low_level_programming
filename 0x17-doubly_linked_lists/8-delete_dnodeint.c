#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted (starting from 0).
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int count = 0;

    if (*head == NULL)
        return -1;

    current = *head;

    /* Special case: if the node to be deleted is the head */
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    /* Traverse the list to find the node to be deleted */
    while (current != NULL && count < index)
    {
        current = current->next;
        count++;
    }

    /* If the node to be deleted is not found */
    if (current == NULL)
        return -1;

    /* Adjust pointers to bypass the node to be deleted */
    temp = current->prev;
    temp->next = current->next;
    if (current->next != NULL)
        current->next->prev = temp;

    /* Free the node to be deleted */
    free(current);

    return 1;
}

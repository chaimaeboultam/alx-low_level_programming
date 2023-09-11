#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element in the array.
 *
 * Return: A pointer to the allocated memory or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return NULL;

    /* Initialize the allocated memory to zero using loops */
    unsigned int total_size = nmemb * size;

    for (unsigned int i = 0; i < total_size; i++) {
        ((char *)ptr)[i] = 0;
    }

    return ptr;
}

#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
    if (min > max) {
        return NULL; // Return NULL if min > max
    }

    int *arr;
    int size = max - min + 1;

    arr = malloc(size * sizeof(int));

    if (arr == NULL) {
        return NULL; // Return NULL if malloc fails
    }

    // Fill the array with values from min to max
    for (int i = 0; i < size; i++) {
        arr[i] = min++;
    }

    return arr;
}

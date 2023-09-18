#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: the array to use
 * @size: the size of the array
 * @cmp: the function pointer
 *
 * Return: the index of the first element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);


	for (int i = 0; i < size; i++)
	{
        	if (cmp(array[i]) != 0)
        	return (i);
       	}

	return (-1);
}

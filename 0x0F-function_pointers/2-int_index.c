#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index-a function that searches for an integer
 * @array: the array to use
 * @size: the size of the array
 * @cmp: the function to pointer
 *
 * Return: the index of the first element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if(array == NULL || cmp == NULL)
		return;

	if(size <= 0)
		return (-1);

	for(i = 0; i <= size; i++)
	{
		if(cmp(array[i] == 0)
			return (-1);

		else
			break;
	}	
	return (cmp(i));
}

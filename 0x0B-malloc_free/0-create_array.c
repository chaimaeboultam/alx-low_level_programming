#include <stdlib.h>

/**
 * create_array-creates an array of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: the caracteres given by the user
 *
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str= malloc(size * sizeof(char));

	if(size == 0 || str == NULL)
	
		return (NULL);
	

	else
	{
		for(i=0; i< size; i++)
			str[i]= c;
		return (str);
	}
}

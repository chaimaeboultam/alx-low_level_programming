#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup-duplicate te a new memory location
 * @str: char
 *  returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *s;
	int i,j;

	if(str == NULL)
		return (NULL);
	i=0
	while(str[i]!= '\0')
		i++;
	s=malloc(sizeof(char)*(i+1));

	if(s== NULL)
		return (NULL);

	for(j=0; j< i+1; j++)
		s[j]=str[j];

	return(s);
}

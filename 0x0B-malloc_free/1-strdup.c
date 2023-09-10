#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 *
 * Return: A pointer to a newly allocated space in memory,
 *         which contains a copy of the string, or NULL if str is NULL
 */
char *_strdup(char *str)
{
    char *s;
    int i, j;

    if (str == NULL)
        return (NULL);

    i = 0;
    while (str[i] != '\0')
        i++;

    s = malloc(sizeof(char) * (i + 1));

    if (s == NULL)
        return (NULL);

    for (j = 0; str[j]; j++)
        s[j] = str[j];

    s[j] = '\0';  // Add null terminator to the duplicated string

    return (s);
}

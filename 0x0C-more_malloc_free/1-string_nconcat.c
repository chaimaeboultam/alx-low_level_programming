#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to a newly allocated space in memory,
 *         containing s1, followed by the first n bytes of s2, and null-terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    unsigned int i, j, l1, l2;

    l1 = 0;
    while (s1[l1] != '\0')
        l1++;

    l2 = 0;
    while (s2[l2] != '\0')
        l2++;

    if (n >= l2)
        n = l2;

    ptr = malloc(l1 + n + 1);

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < l1; i++)
        ptr[i] = s1[i];

    for (j = 0; j < n; j++)
        ptr[i + j] = s2[j];

    ptr[i + j] = '\0';

    return (ptr);
}

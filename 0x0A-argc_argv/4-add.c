#include <stdio.h>

/**
 * _atoi - Convert a string to an integer
 * @s: String to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    /* Ignore leading white space characters */
    while (*s == ' ')
        s++;

    if (*s == '-' || *s == '+')
    {
        sign = (*s == '-') ? -1 : 1;
        s++;
    }

    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}

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


/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int mul, num1, num2;

    if (argc != 3)
    {
        printf("ERROR\n");
        return 1;
    }
    else
    {
        num1 = _atoi(argv[1]);
        num2 = _atoi(argv[2]);
        mul = num1 * num2;
        printf("%d\n", mul);
    }

    return 0;
}

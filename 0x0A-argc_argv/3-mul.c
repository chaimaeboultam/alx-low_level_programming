#include <stdio.h>
#include <stdlib.h> // You need this for atoi

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
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
        mul = num1 * num2;
        printf("%d\n", mul);
    }

    return 0;
}

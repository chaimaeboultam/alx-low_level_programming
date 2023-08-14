#include <stdio.h>

/**
 * main - Entry point
 * Description: Printing the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alpha = 'a';
    char alpho = 'A';

    do {
        putchar(alpha);
        alpha++;
    } while (alpha <= 'z');

    do {
        putchar(alpho);
        alpho++;
    } while (alpho <= 'Z');

    printf("\n");
    return (0);
}

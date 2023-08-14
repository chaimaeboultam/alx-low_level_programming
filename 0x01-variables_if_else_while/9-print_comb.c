#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: 'all possible combinations of single-digit numbers'
 * Return: Always 0 (Success)
 */
int main(void)

{
    int i;

    for (i = 0; i < 9; i++) {
        putchar(i + '0');
        putchar(',');
	putchar(' ');
    }
    putchar('9');
    printf("\n");
    return 0;
}

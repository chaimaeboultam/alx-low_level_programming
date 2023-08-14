#include <stdio.h>
/**
 * main - Entry point
 * Description: 'get the last digit of a number'
 * Return: always 0
 */

int main(void)
{
     char letter= 'a';

    for (letter = 'a'; letter <= 'z'; letter++) {
        if (letter != 'q' && letter != 'e') {
            putchar(letter);
        }
    }
    putchar('\n');
    return 0;
}

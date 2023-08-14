#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Printing the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
  char alpha = 'a';

  do {
    putchar(alpha);
    alpha++;
  } while (alpha <= 'z');
  putchar('\n');
 return (0);
}


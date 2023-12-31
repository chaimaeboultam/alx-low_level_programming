#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase
 *
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

	putchar('\n');
	return (0);
}

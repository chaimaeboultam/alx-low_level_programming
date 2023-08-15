#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the letters except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++) {
		if (letter != 'q' && letter != 'e') {
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}

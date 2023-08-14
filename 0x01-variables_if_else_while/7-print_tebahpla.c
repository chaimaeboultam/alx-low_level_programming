#include <stdio.h>
/**
 * main - Entry point
 * Description: 'give all the alphabrts in reverse'
 * Return: always 0
 */
int main(void)
{
	int i;

	for(i=0;i<26;i++)
		putchar(i + 'a');
	return 0;
}

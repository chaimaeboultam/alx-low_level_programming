#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_digit_1, second_digit_1, first_digit_2, second_digit_2;

	for (first_digit_1 = 0; first_digit_1 <= 9; first_digit_1++)
	{
		for (second_digit_1 = 0; second_digit_1 <= 9; second_digit_1++)
		{
			for (first_digit_2 = 0; first_digit_2 <= 9; first_digit_2++)
			{
				for (second_digit_2 = 0; second_digit_2 <= 9; second_digit_2++)
				{
					int number_1 = first_digit_1 * 10 + second_digit_1;
					int number_2 = first_digit_2 * 10 + second_digit_2;

					if (number_1 < number_2)
					{
						putchar(first_digit_1 + '0');
						putchar(second_digit_1 + '0');
						putchar(' ');
						putchar(first_digit_2 + '0');
						putchar(second_digit_2 + '0');

						if (number_1 != 98 || number_2 != 99)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return 0;
}

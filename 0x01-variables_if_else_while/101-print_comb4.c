#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point to the program
 * description: prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 1000)
	{
		int first_digit = i / 100;
		int second_digit = (i / 10) % 10;
		int third_digit = i % 10;

		if (first_digit < second_digit && second_digit < third_digit)
		{
		putchar('0' + first_digit);
		putchar('0' + second_digit);
		putchar('0' + third_digit);

			if (i < 789)
			{
			putchar(',');
			putchar(' ');
			}
		}

	i++;
	}

	putchar('\n');

	return (0);
}

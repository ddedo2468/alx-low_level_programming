#include <stdio.h>

/**
 * print_fib - computes and prints the Fibonacci sequence up to n terms
 * @n: the number of terms to print
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int count, current, next, current_high, current_low, next_high, next_low;

	current = 1;
	next = 2;

	printf("%lu", current);

	for (count = 1; count < 91; count++)
	{
		printf(", %lu", next);
		next = next + current;
		current = next - current;
	}

	current_high = current / 1000000000;
	current_low = current % 1000000000;
	next_high = next / 1000000000;
	next_low = next % 1000000000;

	for (count = 92; count < 99; ++count)
	{
		printf(", %lu", next_high + (next_low / 1000000000));
		printf("%09lu", next_low % 1000000000);
		current_high = current_high + next_high;
		next_high = current_high - next_high;
		next_low = next_low + current_low;
		current_low = next_low - current_low;
	}

	printf("\n");

	return 0;
}

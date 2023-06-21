#include <stdio.h>

/**
 * print_fib - computes and prints the Fibonacci sequence up to n terms
 * @n: the number of terms to print
 */
void print_fib(int n)
{
	unsigned long int first = 1, second = 2, fibonacci;
	int i;

	printf("%lu, %lu", first, second);

	for (i = 2; i < n; ++i)
	{
		fibonacci = first + second;
		printf(", %lu", fibonacci);
		first = second;
		second = fibonacci;
	}

	printf("\n");
}

int main(void)
{
	print_fib(98);
	return 0;
}

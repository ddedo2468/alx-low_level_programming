#include <stdio.h>
/*
 * sum_of_multiples - computes and prints 
 * the sum of all the multiples 
 * of 3 or 5 below 1024
 * Return: the total of sum
 */
int sum_of_multiples()
{
	int total = 0;
	int num;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			total += num;
		}
	}
	return total;
}

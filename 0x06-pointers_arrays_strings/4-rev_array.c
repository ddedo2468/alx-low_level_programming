#include "main.h"
/**
  * reverse_array - reverse content of an array
  * @a: pointer to the array
  * @n: no. of elements in the array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int counter;
	int temp;

	for (counter = 0 ; counter < n / 2 ; counter++)
	{
		temp = a[counter];
		a[counter] = a[n - 1 - counter];
		a[n - 1 - counter] = temp;
	}
}

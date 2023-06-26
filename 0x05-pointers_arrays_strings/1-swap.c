#include "main.h"
/**
 * swap_int - swaps values of 2 ints.
 * @a: first val point
 * @b: sec val point
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

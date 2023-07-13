#include "main.h"
/**
 * malloc_checked - allocate memory.
 * @b: unsigned int memory size.
 * Return: void pointer to malloc'd memory space
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}

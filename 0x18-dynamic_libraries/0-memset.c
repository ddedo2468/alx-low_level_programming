# include <stdio.h>
# include "main.h"
/**
  * _memset - fills memory with constant byte
  * @s: pointer to the memory area to be filled
  * @b: the constant byte to fill the memory
  * @n: no. of bytes to be filled
  * Return: the pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}

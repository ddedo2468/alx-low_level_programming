#include <stdio.h>
#include "main.h"
/**
  * _memcpy - copy memory area
  * @dest: pointer to the destination of the  copied data
  * @src: pointer to the source of the copied data
  * @n: no. of bytes to be copied
  * Return: pointer to the destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

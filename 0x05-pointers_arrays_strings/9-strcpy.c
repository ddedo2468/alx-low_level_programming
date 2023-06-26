#include "main.h"
/**
 * *_strcpy - Copy the str pointed to by pointer
 * @dest: ch string
 * @src: ch string
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[i] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

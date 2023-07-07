#include "main.h"
/**
 * _strncpy - return a cpy of src n characters
 * @dest: the original string
 * @src: the string to copy from
 * @n: the number of character to copy
 * Return: the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}

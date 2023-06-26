#include "main.h"
/**
 * _strlen - retur lnth of a string
 * @s: ch pointer
 * Return: string lnth
*/
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;

	return (x);
}

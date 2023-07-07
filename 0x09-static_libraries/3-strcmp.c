#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: str 1
 * @s2: str 2
 * Return: less than 0 if s1 < s2, 0 if equal
 * more than 0 if s1 > s2.
*/
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		return (s1[x] - s2[x]);
	}
	return (0);
}

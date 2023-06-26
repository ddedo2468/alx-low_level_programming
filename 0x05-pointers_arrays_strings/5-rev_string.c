#include "main.h"
/**
 * rev_string - rev a string
 * @s: array of cahrs
 */
void rev_string(char *s)
{
	int x, j, k;
	char i;

	for (x = 0; s[x] != '\0'; x++)
		;

	k = x;
	for (x--, j = 0; j < k / 2; x--, j++)
	{
		i = s[j];
		s[j] = s[x];
		s[x] = i;
	}
}

#include "main.h"
/**
 * leet - codes the string
 * @chAr: the strings
 * Return: modified version of the string
 */
char *leet(char *chAr)
{
	int x, c;
	int up[] = {65, 69, 79, 84, 76};
	int low[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};
	int array_len;

	array_len = 5;

	for (x = 0; chAr[x] != '\0'; x++)
	{
		for (c = 0; c < array_len; c++)
		{
			if (chAr[x] == up[c] || chAr[x] == low[c])
			{
				chAr[x] = num[c];
			}
		}
	}

	return (chAr);
}

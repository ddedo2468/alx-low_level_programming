#include "main.h"

/**
  * binary_to_uint - conv any bin to ui
  * @b: ptr to str
  * Return: undigned int.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int stlen, x;
	char c;

	if (b == NULL)
		return (0);

	uint = 0;
	stlen = strlen(b);

	for (x = 0 ; x < stlen ; x++)
	{
		c = b[x];

		if (c == '0' || c == '1')
		{
			uint = (uint << 1) | (c - '0');
		}
		else
			return (0);
	}
	return (uint);
}

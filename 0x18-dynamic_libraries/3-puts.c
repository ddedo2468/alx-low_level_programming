#include "main.h"
/**
 * _puts - output string to stdout
 * @str: ptr to str to print
 * Description: using put char
*/
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}

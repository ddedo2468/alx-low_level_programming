#include <stdio.h>
/**
 * main - entery point to the program
 * Description: print all letters EXCEPT the letter q and e.
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

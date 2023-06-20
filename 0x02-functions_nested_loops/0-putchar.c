#include "main.h"
/*
 * main - entry point to the program
 * Description: a program that prints _putchar 
 * Return: 0 (Success)
 */
int main(void)
{
	char alx[] = {'_','p','u','t','c','h','a','r'};

	for (int i = 0; i < sizeof(alx); i++)
	{
		printf("%c", alx[i]);

	}

	printf("\n");

	return (0);
}

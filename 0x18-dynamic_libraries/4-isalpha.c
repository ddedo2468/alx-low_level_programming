#include "main.h"
/**
 * _isalpha - check if is alphabet char
 * @c: the character to check
 * Return: 1 if c is a letter, else return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

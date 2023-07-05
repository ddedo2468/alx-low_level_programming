#include "main.h"
/**
 * _strlen_recursion - function that return the length of a string
 * @s: pointer to char
 * Return: 0 if terminator or 1+_strlen_recursion(s+1)
 */
int _strlen_recursion(char *s)
{
        if (*s == '\0')
        {
                return (0);
        }
        else
        {
                return (1 + _strlen_recursion(s + 1));
        }
}

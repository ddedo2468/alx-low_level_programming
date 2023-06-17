#include <stdio.h>
#include <stdlib.h>
/*
 * main - entry to the main program
 * Description: a program that printing numbers.
 * Return: 0 (Success)
 */
int main(void)
{
        int i = 0;

        while (i < 100)
        {
                int first_digit = i / 10;
                int second_digit = i % 10;

                if (first_digit != second_digit && first_digit < second_digit)
                {
                        putchar('0' + first_digit);
                        putchar('0' + second_digit);

                        if (i < 89)
                        {
                        putchar(',');
                        putchar(' ');
                        }
                }
                i++;
        }

        putchar('\n');

        return (0);
}

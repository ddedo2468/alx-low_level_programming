#include <unistd.h>
/**
 * main - a program to print a line using printf  function
 * Return: 1 (Success)
 */
int main(void) {
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, sizeof(message) - 1);
    return 1;
}

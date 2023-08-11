#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char digit = '0';

    while (digit <= '9')
    {
        putchar(digit);
        digit++;
    }

    char letter = 'a';

    while (letter <= 'f')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');  // Print a new line after the numbers
    return (0);
}

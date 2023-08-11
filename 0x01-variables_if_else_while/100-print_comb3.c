#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of
 *              two digits, separated by a comma and space, in ascending order
 *              using the putchar function. The two digits must be different,
 *              and repeating patterns (e.g., 00, 11, ..., 88) are skipped.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int number = 0;

    while (number <= 89)
    {
        putchar(number / 10 + '0');  // Print the tens digit as a character
        putchar(number % 10 + '0');  // Print the ones digit as a character

        if (number < 89)
        {
            putchar(',');  // Print comma
            putchar(' ');  // Print space
        }

        if ((number % 10) == 8)
        {
            number += 2;  // Skip repeating digits (e.g., 00, 11, ..., 88)
        }
        else
        {
            number++;
        }
    }

    putchar('\n');  // Print a new line at the end
    return (0);
}

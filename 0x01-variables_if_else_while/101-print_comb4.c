#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of
 *              three digits, separated by a comma and space, in ascending order
 *              using the putchar function. The three digits must be different,
 *              and repeating patterns (e.g., 012, 120, 102, ...) are skipped.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit1, digit2, digit3;

    for (digit1 = 0; digit1 <= 7; digit1++)
    {
        for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
        {
            for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
            {
                putchar(digit1 + '0');  // Print the first digit as a character
                putchar(digit2 + '0');  // Print the second digit as a character
                putchar(digit3 + '0');  // Print the third digit as a character

                if (digit1 < 7 || digit2 < 8 || digit3 < 9)
                {
                    putchar(',');  // Print comma
                    putchar(' ');  // Print space
                }
            }
        }
    }

    putchar('\n');  // Print a new line at the end
    return (0);
}

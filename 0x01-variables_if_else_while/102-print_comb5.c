#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit
 *              numbers separated by a space, in ascending order, while avoiding
 *              repeating patterns and adhering to the specified format.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 <= 99; num1++)
    {
        for (num2 = 0; num2 <= 99; num2++)
        {
            if (num1 < num2)
            {
                putchar(num1 / 10 + '0');   // Print tens digit of num1
                putchar(num1 % 10 + '0');   // Print ones digit of num1
                putchar(' ');              // Print space
                putchar(num2 / 10 + '0');   // Print tens digit of num2
                putchar(num2 % 10 + '0');   // Print ones digit of num2

                if (num1 != 98 || num2 != 99)
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

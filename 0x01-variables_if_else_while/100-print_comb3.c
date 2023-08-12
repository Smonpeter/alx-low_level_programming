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
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

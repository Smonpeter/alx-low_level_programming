#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of
 *              single-digit numbers, separated by a comma and space,
 *              in ascending order using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n !=57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);
}

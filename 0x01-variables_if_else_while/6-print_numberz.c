#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single digit numbers of base 10,
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

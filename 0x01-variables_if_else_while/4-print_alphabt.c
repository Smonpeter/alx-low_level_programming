#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet,
 *              excluding the letters 'q' and 'e', followed by a new line,
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

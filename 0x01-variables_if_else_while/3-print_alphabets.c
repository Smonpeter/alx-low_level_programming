#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet,
 *              followed by the uppercase alphabet, and then a new line,
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar ('\n');
	return (0);
}

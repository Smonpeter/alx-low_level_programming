#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number for which to print the last digit
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + 0);
	return (k);
}

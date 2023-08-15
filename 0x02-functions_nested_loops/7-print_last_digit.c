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

	k = n % 10;
	if (n < 0)
		k = -k;
	_putchar(k + 0);
	return (k);
}

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer for which to find the absolute value
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n >= 0)
	{
		return (n);
	}
	return (0);
}

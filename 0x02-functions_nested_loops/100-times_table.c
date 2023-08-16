#include <stdio.h>

/**
 *main -  print_times_table - Prints the n times table
 *Return:(0)Succes
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (1 = 0; j <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i
					if (j == 0)
					{
						putchar(k + '0');

					}
					else if (k >= 10 && k < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					}
					else if (k >= 10 && k < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
					else if (k >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((k / 100) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar((k % 10) + '0');
					}
			}
			_putchar('\n');
		}
	}
}

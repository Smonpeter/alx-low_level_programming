#include <stdio.h>

/**
 *main -  print_times_table - Prints the n times table
 *Return:(0)Succes
 */
int main(void)
{
	int sum = 0;
	int n;

	for (n = 1 ; n <= 10 ; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}

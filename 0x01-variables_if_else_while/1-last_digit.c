#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go here */

/**
 * main - Entry point of the program
 *
 * Description: This function initializes a random number generator,
 * generates a random number, and prints the last digit of the number
 * along with corresponding messages.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);  
	if (last_digit > 5)
	{
        	printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
        	printf("and is less than 6 and not 0\n");
	}
    
	return (0);
}	

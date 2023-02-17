#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign random number to
 * output - n is zero if n equal 0
 * output - n is negative if n less than 0
 * output - n is positive is n greater than 0
 * Return: 0 always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n == 0)
		printf("%d is zero\n", n);
	if( n < 0)
		printf("%d is negative\n", n);
	if( n > 0)
		printf("%d is positive\n", n);
	
	return (0);
}

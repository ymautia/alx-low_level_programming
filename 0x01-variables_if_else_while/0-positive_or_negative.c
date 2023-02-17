#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf(n, "%d is positive\n");
	else if (n < 0)
		printf(n, "%d is negative\n");
	else
		printf(n, "%d is zero\n");

	return (0);
}

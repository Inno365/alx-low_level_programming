#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - assigns a random number to int n everytime
 *checks and prints numbers
 *Return:0 an intiger on completing computation
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

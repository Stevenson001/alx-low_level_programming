#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * no argument taken
 *
 * Description: prints whether the number number stored in the variable n
 * is positive or negative or zero
 * Return: 0 on success.
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
	else
		printf("%d is negative\n", n);
	return (0);
}

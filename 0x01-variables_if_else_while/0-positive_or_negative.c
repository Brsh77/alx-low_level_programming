#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Check if a number is greater than 0
 * @nb: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

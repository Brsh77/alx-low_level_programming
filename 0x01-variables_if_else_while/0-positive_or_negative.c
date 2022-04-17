#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* n will store a diff value every time */
int main(void) /* outputs positive or negative or zero*/
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

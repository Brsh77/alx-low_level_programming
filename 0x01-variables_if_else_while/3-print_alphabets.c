#include <stdio.h>
/* main checks for alpha character a to z
 *
 * returns 1 when printing a to z
 */
int main(void)
{
	char alpha;
	for(alpha = 'a'; alpha <='z' ; alpha++)
		putchar(alpha);
	for(alpha = 'A'; alpha <='Z' ; alpha++)
		putchar(alpha);
putchar('\n');
return (0);
}


#include <stdio.h>
/**
* main - checks for alpha character a to Z
*
* Return: 1 when printing a to Z
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
putchar('\n');
return (0);
}
#include <stdio.h>
/**
* main - checks reverse of alpha character z to a
*
* Return: 1 when printing z to a reverse
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
putchar('\n');
return (0);
}
